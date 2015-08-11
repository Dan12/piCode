import RPi.GPIO as GPIO
import time

led = 16

GPIO.setmode(GPIO.BOARD)

GPIO.setup(led, GPIO.OUT)
pmwLed = GPIO.PWM(led, 500)
delTime = (float)(raw_input("Enter Cycle Duration: "))
delTime = delTime/200
try:
	pmwLed.start(0)
	time.sleep(1)
	i = 0
	change = 1
	while True:
		pmwLed.ChangeDutyCycle(i)
		time.sleep(delTime)
		i+=change
		if i > 100:
			change = -1
			i = 100
		if i < 0:
			change = 1
			i = 0
except KeyboardInterrupt:
	pmwLed.stop()
	GPIO.cleanup()
