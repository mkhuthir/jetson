#!/usr/bin/python3

from jetbot import Robot
import time

robot = Robot()

robot.forward(0.3)
time.sleep(0.2)
robot.backward(0.3)
time.sleep(0.2)

robot.stop()


