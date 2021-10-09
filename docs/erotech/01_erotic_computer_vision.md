# Erotic computer vision
## Erotic Applications
I will train some computer vision models for erotic applications. 
In this article, the models that will be developed in near future will be explained.

The applications are

* App1: The robotic arm masturbator moves synchronized with video
* App2: The video or sound controller by motion detection of hand or masturbator

App 1 has big impact to many applications. 
For example, the robot arm motion can not only synchronized with ordinary video but also with VR video or VR app. So it has really big potential.
App 2 has a narrower impact than the App 1 because the video or sound will be controlled by the motion, so there's some delay between the motion and the play of the video or the sound.

The target objects to detect are 

* hand: App2
* the genital of the man: App1, App2
* masturbator: App1, App2

In the remaining of this article will be how to detect and create models.

## Decide how to detect objects
The methods to detect these objects can be 

* 2d bounding box detection in image plane
* instance segmentation in image plane
* 3d object detection
* 6DoF estimation
* shape and pose estimation
* 2d keypoint detection
* 3d keypoint detection

We need to choose the most suitable methods for each objects considering applications. We need to consider applications because it will decide requirements of the performance and each task has a different difficulties of collecting dataset and training the model. It can be rephrased by decide the goal and make the requirements of the model first. In this case, some application will be developed later experimentally. So the collection of the application defines requirement of the model. 

Additional requirement is sensor is RGB camera or RGBD camera and model should run realtime. (30-60Hz)

### Hand recognition
The dataset collection is easy, but getting the diversity is a bit hard. 
Mostly synthetic data and the internet images are the source of dataset. 

Application only requires the algorithm to detect the simple motion and the shape of the hand. So 3d or 2d keypoint detection might be enough.

### Genital recognition
Probably it's possible to get images of them from the internet but recording the new data with richer ground truth from other sensors is a bit difficult. For example, 3d keypoint detection dataset is often constructed from the multiple cameras and depth sensors. But recording new data with diversity is a bit difficult. Also can rely on synthetic data, but we should also get real data.

The requirement from the application is that it should detect shape of the object in detail, because the program will control their arm to touch the genital effectively. It should know recognized part is which part of the genital. The algorithm also need to handle different size and the shape.

The options given this limitation will be the deep learning models which input is RGB and the ground truth label can be annotated given image or videos. The suitable one is instance segmentation because it can be combined with depth information and can be used as a shape estimation.

So it is required to solve the problem, recognized which part is which part by unsupervised shape and pose estimation or the handcrafted logic and instance segmentation or other methods.

### Masturbator recognition
The dataset construction is possible It can be constructed from the images in the internet and also I can acquire new dataset by buying them and taking photos of them. 

The requirement of the application is knowing the direction of the masturbator. For some cases, it doesn't need to handle shape change because shape change is not so large problem, but for some case, it need to handle shape deformation.

So given this, the 6DoF or the shape and pose estimation is the direction to explorer, balancing the difficulty and the effect.

## Conclusion
I decided the direction to explorer based on the application requirements and the ML task candidates. The task will be 

* Hand: 3D Keypoint detection 
* Genital: Shape and pose estimation, instance segmentation
* Masturbator: Shape and pose estimation, 6DoF estimation

This is the overall direction.

In the next chapter, I will survey each area and decide what to create.