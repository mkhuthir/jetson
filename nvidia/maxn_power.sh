#!/bin/sh

echo "Setting Power Mode to Max"
sudo nvpmodel -m 0
echo "Done"
sudo nvpmodel -q

