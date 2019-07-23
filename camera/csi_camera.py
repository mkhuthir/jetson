#!/usr/bin/python3

from jetcam.csi_camera import CSICamera

camera = CSICamera(width=224, height=224)

image = camera.read()

print("image shape HxWxC", image.shape)
print("camera shape HxWxC", camera.value.shape)
