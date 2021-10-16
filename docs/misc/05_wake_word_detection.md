# Alternatives for wake word detection for any language
I'm implementing an AI assistant software. And I need to implement a wake word detection feature. A wake word detection is the algorithm to detect some word to "wake" AI. That means the wake word is something like command to trigger some process. The wake word is usually short sentence like, "Alexa", or "Hey siri" and the role is distinguish the human voice from other sounds and distinguish the wake word from other words. 

The most famous wake word detection method is probably "snowboy", but the development has stopped and the website for constructing model is closed.

So I tried to find an another way to construct a wake word detection.

## Feature Extractor for audio
There are two pretrained model to extract embeddings from audio. 
One is [YAMNet](https://www.tensorflow.org/hub/tutorials/yamnet), this model is classification model of the audio, but it can also output embedding from the audio. From [this list of output classes](https://github.com/tensorflow/models/blob/master/research/audioset/yamnet/yamnet_class_map.csv), I guess that this class can separate different kind of sounds, probably the distinguishable sound is human voice from cat voice, or human voice from other voice. or not.
There are also more detailed classes for human voices, but I guess it cannot distinguish different word because from the classes the model is not trained to do so.

Another feature extractor is [FRILL](https://ai.googleblog.com/2021/06/frill-on-device-speech-representations.html), FRILL is the best speech recognition feature extractor for non semantic speech recognition task. The examples of non semantic speech recognition task is speech emotion recognition, language identification, age recognition. The semantic speech recognition task is automatic speech recognition, phone classification. So I guess recognition based on word is very challenging or impossible with this feature extractor.

## So what should I do?
I redesign the application I'm developing. Firstly detect the human voice and apply SpeechToText and check if it's a wake word or not . The dataset that is used to train FRILL and YAMNet has [these classes for human speech](https://research.google.com/audioset/ontology/human_voice_1.html) and "Speech" class can be used for this. Since YAMNet is already a classifier, it's easier to use than FRILL. 

In my case, YAMNet is easiest one so I started using the model.

## Implementation of human voice detector
[Here](https://gist.github.com/xiong-jie-y/c88e9f3e9516f0ecac7fb93393d3dc17) is the implementation.

Basically the script is like this

* Read sound from the microphone for 0.1
* Put them into circular buffer 
* When there is a enough 0.3[s] buffer, do inference on the buffered sound.
* When listen human voice, keep accumulating sound until human voice is over

I feel recognition accuracy is so-so. 
Also the table below is the computational costs of this model of onnx and original model.


| Runtime      | Mean [ms]                          | Std [ms]                          | Video Memory [MiB] |
| ----------- | ------------------------------------ |----------------------------------- |----------------------------------- |
| tensorflow-gpu       | 4.879195771055545  | 0.47763425563967565 | 6013MiB |
| onnxruntime-gpu (CPUExecutionProvider)       | 1.2899305888854196 | 0.23154279587315799 |  0 |
| onnxruntime-gpu (CUDAExecutionProvider)    | 14.181141914335141 | 2.326298014955945 | 1187 |


It seems that the CUDAExecutionProvider of the onnxruntime-gpu is slower than the tensorflow-gpu.
And the fastest one is CPU on onnxruntime. The onnx model is converted from the tflite version of this model. but I got a similar result when converting the model from saved_model.pb. Even when trying different ops versions (both 14 and 13).
My expectation was both gpu is faster on onnx and cpu was not sure because tf2onnx optimizes the model when converting the model into onnx. So far CPU seems the best results.

Also it can be redesigned like, after detecting human voice wave, the speech to text can be run on the voice wave and detected text can be compared with another voice.

## Implementation of SpeechToText function
This implementation is extremely easy. You can use ESPNet to do speech to text or text to speech for various language.
Just follow [this article](https://tech.retrieva.jp/entry/2020/12/23/170645), and you can implement speech to text algorithm of Japanese.

## Takeaway
Even though it's not super power efficient and computational efficiently that can be used in embedding systems.
But the combination of the human voice detection and speech to text approach works better than wake word detection,
without training data for wake word. This is really useful for prototyping or not computational scarce environment.
