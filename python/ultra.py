import RPi.GPIO as GPIO

import time

def readDistance(tr, ec):
	GPIO.output(tr, True)
	time.sleep(0.00001)
	GPIO.output(tr, False)
	while GPIO.input(ec)==0:
		pulse_start = time.time()	
	while GPIO.input(ec)==1:
		pulse_end = time.time()
	pulse_duration = pulse_end - pulse_start
	distance = pulse_duration*17150
	distance = round(distance, 2)
	print "Distance:",distance,"cm"
	return

GPIO.setmode(GPIO.BOARD)
TRIG = 16
ECHO = 18

GPIO.setup(TRIG,GPIO.OUT)
GPIO.setup(ECHO,GPIO.IN)

GPIO.output(TRIG, False)
time.sleep(2)

try:
	while True:
		readDistance(TRIG, ECHO)
		time.sleep(0.05)	
except KeyboardInterrupt:
	GPIO.cleanup()
