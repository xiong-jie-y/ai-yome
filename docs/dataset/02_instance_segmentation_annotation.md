# How I annotated 300 images with instance segmentation mask
This is an article about how I annotate hand dataset fast.

Firstly I'll explain annotation data formats and what I chose because this is important to choose the annotation tol.

## Annotation data formats
There are several segmentation tasks and which format should we choose? [Panoptic segmentation format](https://cocodataset.org/#format-data) of the coco dataset seems flexible because the panoptic dataset can be used to train instance segmentation, semantic segmentation, panoptic segmentation.

Briefly, the data format of the panoptic annotation is png image and json file. Each pixel of the image contains segment ids and the json file contains class_id and other metadata of the segments. The detail of the data format is [there](https://cocodataset.org/#format-data).

Unfortunately there's no annotation tools that supports the panoptic annotation format. So we need other options.

One of the other options is [VOC format](https://github.com/wkentaro/labelme/tree/master/examples/semantic_segmentation#convert-to-voc-format-dataset). That is supported by many tools. The png image has a class id and there's no distinction between different instances.

Other option is instance segmentation format. Coco format can contain segment information for each objects and we can utilize it.

I think the best format depends on task to solve. For some case, if the target scene to segment only contains stuff, we can choose semantic segmentation and the target scenes to segment only contain things we can choose instance segmentation format.
You can find the informal explanation of things/stuff [here](https://competitions.codalab.org/competitions/19507).

## Tools
There are some tools that can be used to segmentation tasks. 
Unfortunately AFAIK, there's no tools that can output panoptic coco format. So currently we need to choose an annotation tool that supports both coco instance segmentation format and voc segmentation format.

Labelme and CVAT both supports both formats.
There's a brief description of these tools.

### Labelme
Labelme is really simple tool that support folder based data/task management and supports coco like format for instance segmentation and VOC like for semantic segmentation. 

This is all written in python and it can be easily modified by software engineer in machine learning.

### CVAT
CVAT is annotation + data/annotation task management platform.
This is really nice for larger scale team.

This tool is 

* It is written in Typescript and need someone who knows Typescript.
* It has a auto/semi automatic annotation tools that can be potentially helpful and it can be extensible.

About dataset, it can export both VOC like format and COCO format.

## Example: Hand Annotation Task
For a hand annotation task, exporting a file as coco format is suitable, because human body are things (not stuff) and it is better to treat them as a instance segmentation.
This is natural because when imagining image editing application, we want to distinguish 
And for my case, I wanted to use auto/semi automatic annotation tool so I chose a CVAT.

I added a feature to auto annotate because the models CVAT provides didn't have enough precision.

## How to create new auto annotation feature in CVAT
The steps to add semi auto annotation feature is like this.

1. Create serverless function description file.
2. Create handler that process the request from the CVAT and returns response
3. Create model handler that call model.

There's [an example branch I made](https://github.com/xiong-jie-y/cvat/commit/593747ef6d2ce2c98bbdff49b264c60ef6b4dfbe) to add an [latest interactive segmentation model from sumsung.](https://github.com/saic-vul/ritm_interactive_segmentation)
You can deploy this function to the nuclio by switching to my branch and running the command below.

```sh
nuctl deploy --project-name cvat --path pytorch/ritm_interactive_segmentation --file pytorch/ritm_interactive_segmentation/function-gpu.yaml
```

I guess you can create automatic labeling feature by adding similar files.

## Data collection
It depends on application, but I collected data from cooking videos, because that contains scenes of hand holding things and can be a good training dataset.

## Annotation
It takes around 2 hours to create 300 images this is around 10[s/image] in average. So not bad for a semantic segmentation annotation.

Data will be published later. Currently I cannot make it public because I couldn't find suitable storage service for this.

## Conclusion
interactive segmentation model is really useful and already practical model. Cvat is easily extensible and I recommend it.