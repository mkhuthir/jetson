#!/bin/sh

echo "Setting Power Mode to 5W"
sudo nvpmodel -m 1
echo "Done"
sudo nvpmodel -q
