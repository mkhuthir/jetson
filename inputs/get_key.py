#!/usr/bin/python3

from inputs import get_key

while 1:
	events = get_key()
	for event in events:
		print(event.ev_type, event.code, event.state)

