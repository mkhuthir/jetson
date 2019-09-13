#!/usr/bin/python3

from jetbot import Robot
import time

robot = Robot()

robot.forward(0.2)
time.sleep(3)
robot.stop()


