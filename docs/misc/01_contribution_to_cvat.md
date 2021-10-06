# How I added an interactive segmentation feature to CVAT.
In this article, I will explain how it's easy to add a semi & auto annotation feature to CVAT. 

When the function is merged to CVAT, I felt joy because the function might be used by many users. So I really recommend contributing to OSS if you haven't. 

[CVAT](https://github.com/openvinotoolkit/cvat) is a well developed annotation tool for computer vision tasks. 
One of the interesting features of CVAT is semi annotation & auto annotation feature. 
I wanted to use one of the interactive segmentation feature, which helps with annotating instance segmentation, but the features in the CVAT was not enough for my task. So I implemented a new interactive segmentation feature.

The screenshot below is the screenshot of using the new feature. The polygon with black line and painted with white half transparent is the estimated segmentation with new semi annotation.

![](01/Screenshot%20from%202021-10-06%2000-07-12.png)

The following is the note the way I merge the new feature to CVAT.

## What & How I implemented
I already confirmed the basic functionality of CVAT and tried the annotation a bit. I tried an interactive segmentation following [this procedure](https://openvinotoolkit.github.io/cvat/docs/administration/advanced/installation_automatic_annotation/).
I will recommend using them if you haven't used CVAT and want to contribute to them.

The semi & automatic annotation is implemented as a server less function and what I need to add is just a serverless function and cvat will add the serverless function automatically to UI.

By checking nuclio (serverless function management tool) document, and some config file, I guessed that what I need to write is mostly writing docker file for the container. So I read some config files and serverless function scripts under [this directory](https://github.com/openvinotoolkit/cvat/tree/develop/serverless) and environment construction procedure of [new interactive segmentation model](https://github.com/saic-vul/ritm_interactive_segmentation) and just wrote the new config files and serverless function script.

The actual PR is [here](https://github.com/openvinotoolkit/cvat/pull/3740).

## Read contribution guideline
There's a contribution guide for contributors.
Usually the repository has a code style guideline for each language in the repository,
but there seems not for yaml and python maybe because the code line is not so many.
So I just see other code and followed their implicit code style.

## Clean code & Update documentation
I cleaned code and yaml, just rename container name, serverless function name, conform the style to other code, 
update README, tutorial, and CHANGELOG.

That's it.

## Respond to comments and fix it
I didn't get a code fix request and I got a gratitude and code has merged.

## Takeaway
This time merging PR was really easy & fun.

Of course, difficulty of contributing OSS projects depends on project and functions. For example, frontend has a more strict guideline about automated testing and coding styles. So if are not front-end engineer, you should avoid contribute to this part (or maybe you should if you like to learn front-end part).

So find issues or feature request from your favorite OSS, check the guideline and if you think you are confident you can contribute to the OSS. Just comment ot issue, implement it and make PR!
