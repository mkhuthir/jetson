#!/usr/bin/python3

from jetbot import Robot
import time

robot = Robot()

robot.backward(0.3)
time.sleep(0.2)
robot.stop()


