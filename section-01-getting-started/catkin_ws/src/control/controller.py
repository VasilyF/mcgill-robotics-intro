#!/bin/env python3

from random import uniform
from rospy import Publisher, Subscriber
from sensor_msgs.msg import Range

MIN_WALL_DIST = 30	# cm
MAX_SPEED = 50		# cm/s
MAX_SPEED_ANG = 180	# deg/s

currSpeed = 0

def forward(vel_linear=None):
'''go forward at specified speed
if speed not specified, choose random speed
'''
	if vel_linear is None:
		vel_linear = uniform(0, MAX_SPEED)
	elif vel_linear < 0 or vel_linear >= MAX_SPEED:
		raise ValueError('vel_linear is out of permissible range')
	vel_angular = 0.0


def turn():
'''turn on the spot at random angular speed
'''
	vel_linear = 0.0
	vel_angular = uniform(-MAX_SPEED_ANG, MAX_SPEED_ANG) # 180 deg/s CW to 180 deg/s CCW 

def distance_reading_cb(range_msg):
	# TODO - callback for handling distance reading from SONAR
	pass




