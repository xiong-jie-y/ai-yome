# Data Construction Techniques
## [LabelFusion: A Pipeline for Generating Ground Truth Labels for Real RGBD Data of Cluttered Scenes](https://github.com/RobotLocomotion/LabelFusion)
Label fusion is the method to semi automatically annotate 6DoF pose and segmentation of objects from RGBD video of the static scene. The method first reconstruct the scene using the SLAM techniques from the RGBD videos and let users to select 3 points from the point of the object in th reconstructed scene and from these three point the mesh is place on the scene and the 6DoF pose of the object can be calculated (also the 6DoF pose is refined by ICP). 

It can annotate 6DoF of an object by clicking 3 times per an object per scene and thus enable getting vast amount of 6DoF data. Also not only getting vast amount of data, it can annotate cluttered scene that can contribute to the performance of semantic segmentation performance in the experiment. I think it can also be used as a 6DoF pose estimation dataset. But not sure it's implemented in the software or not.

## [HOnnotate: A method for 3D Annotation of Hand and Object Poses](https://github.com/shreyashampali/HOnnotate)
This is the automatic annotation methods for the 6DoF pose of objects and the 3d keypoints of hands. Given RGBD videos from single or multiple videos, the method can produce annotations. 

The things that's necessary for this methods are

1. The precise instance or semantic segmentation model of a hand and the object
2. 3D models of hand and the object
3. The precise 2d keypoint detection model of a hand

There's already many precise 2d keypoint detection model of the hand (e.g. mediapipe hand landmark detector). Extra work is depending on the task which dataset you want to get.

As a 6DoF data annotation method, so compared to the other method, extra work is creating a instance segmentation. If we combine this method with a LabelFusion it might be a really nice 6DoF dataset generation process because LabelFusion can generate both 6DoF and the instance segmentation dataset. 

As a 3d keypoint detection dataset construction method, objects can be any, so it is highly possible that we can just reuse the existing dataset or the objects.

## Conclusion
The dataset construction methods for 6DoF pose relies on RGBD sequence and mesh. 
I think they are necessary because depth channel measured in meter will give 6DoF pose estimation method real measure an mesh will defined the unit direction of an objects.
Especially getting the precise model is the really high hurdle to getting the data.

I will explore the easy way to get the high precision model in another article.