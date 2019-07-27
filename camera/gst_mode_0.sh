#!/bin/bash

# This requests GStreamer to open a camera stream 3820 pixels wide by 2464 high @ 21 frames
# per second and display it in a window that is 960 pixels wide by 616 pixels high.
# The ‘flip-method’ is useful when you need to change the orientation of the camera because if
# flips the picture around for you.

gst-launch-1.0 nvarguscamerasrc ! 'video/x-raw(memory:NVMM),width=3820,height=2464,framerate=21/1,format=NV12' ! nvvidconv flip-method=0 ! 'video/x-raw,width=960, height=616'! nvvidconv ! nvegltransform ! nveglglessink -e
