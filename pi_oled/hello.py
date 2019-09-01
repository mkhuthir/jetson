#!/usr/bin/python3

import Adafruit_SSD1306

from PIL import Image
from PIL import ImageDraw
from PIL import ImageFont

# 128x32 display with hardware I2C:
# setting gpio to 1 is hack to avoid platform detection
disp = Adafruit_SSD1306.SSD1306_128_32(rst=None, i2c_bus=1, gpio=1)

# Initialize library.
disp.begin()

# Clear display.
disp.clear()
disp.display()

# Create blank image for drawing.
# Make sure to create image with mode '1' for 1-bit color.
width = disp.width
height = disp.height
image = Image.new('1', (width, height))

# Get drawing object to draw on image.
draw = ImageDraw.Draw(image)

# Draw a black filled box to clear the image.
draw.rectangle((0,0,width,height), outline=0, fill=0)

# Define some constants to allow easy resizing of shapes.
padding = -2
top = padding
bottom = height-padding

# Move left to right keeping track of the current x position for drawing shapes.
x = 0

# Load default font.
font = ImageFont.load_default()

# Write lines of text.
draw.text((x, top   ),"Hello Line 1",font=font, fill=255)
draw.text((x, top+8 ),"Hello Line 2",font=font, fill=255)
draw.text((x, top+16),"ABCEDFGHIJKLMNOPQRST",font=font, fill=255)
draw.text((x, top+24),"01234567890123456789",font=font, fill=255)

# Display image.
disp.image(image)
disp.display()
