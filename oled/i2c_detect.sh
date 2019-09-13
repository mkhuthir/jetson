#!/bin/sh

echo "\nI2C devices on bus 0:"
i2cdetect -r -y 0

echo "\nI2C devices on bus 1:"
i2cdetect -r -y 1

echo "\nI2C devices on bus 2:"
i2cdetect -r -y 2

