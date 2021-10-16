# Check open source softwares for contributions
Contributing open source software seems interesting.
I read contribution guides from OSS I have some interest.

## OpenCV
### Contribution to OpenCV
OpenCV is a computer vision library that has many features. 
I think most of the software engineer who is related to computer vision has used this library. Since there are ton's of features, I guess this software can be a candidate for many software engineer who touches computer vision including me.

As one of the most popular OSS software, contributor has many option.
The contributor is 

1. Review new code or join discussion on new code
2. Bug fix 
3. feature request
4. Test the latest code
5. Optimization for different platforms

Which task to do heavily depends on your preference and personality.
I don't have a specific feature to develop yet so I decided to start from 1, 2, 4 to familiarize myself to OpenCV.

### Find something to contribute
First step will be check pull-requests, issues. Testing the latest code is interesting, but not sure there's a bug to report and unsure if I can contribute to them by this way.

I read some closed PR is I found out that

* OpenCV reviewers and contributors are really polite and review is good atmosphere.
* It seems there's no big room to do a discussion.

I think both making a pull-request and reviewing the code might be fun, 
but it's a bit difficult to find the PRs that I can review with my skills.

Next thing I checked issues, 
firstly I checked the issues with bug label but it's a bit hard to find the ones I can solve. So next I checked the issues with feature labels. It's a bit easier to find the tickets to solve. One of the dnn module that can be used as a runtime of the dnn model looks attracting. So this is the candidate for this.

## DNN Runtimes
There are many DNN runtimes and it worth surveying these DNN runtimes.

There are some 

* tensorflow supports running tflite model (this is a lighter model)
* onnx model has many features, many converter, support for optimization, running on different dnn runtime
* openvino is optimized for intel products

Among them, onnx is the most attractive product to use & contribute.

### ONNX Runtime
ONNX runtime is has many features. 

* It supports many programming language bindings like C++, Python,...etc
* It supports many execution engine like openvino, TensorRT.
* There are many converter between onnx and other model formats.

So this is really attractive product. 

To contribute to this project for the first time,
they recommend resolving issues with "good first issue" tag, but there is not...
So it seems that I need to find myself appropriate issues for myself.

## DNN Training Frameworks
pytorch, tensorflow, etc...
I think it is a bit difficult for me to contribute to such frameworks.

## Scientific calculation libraries
scipy, numpy, etc...
I think it is a bit difficult for me to contribute to such frameworks.
But probably depend on the feature. 
So probably they can be contribution target. 


## Higher level DNN Frameworks
something like mmdetection.

It might be a target. 

## After searching OSS contribution target...
After checking issues and features of many OSSs, 
I realized that OSS has many features, and issues realated to them, 
issues are different level from lower level to higher level.

So I think I should check issues daily and try to resolve them if I'm interested in one of them.
And continuously learn features of the framework and add features to them when I come up with it.
These are the way to start contributing to OSS.