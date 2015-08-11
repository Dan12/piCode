import RPi.GPIO as GPIO
import time

led = 16
button = 18

GPIO.setmode(GPIO.BOARD)

GPIO.setup(led, GPIO.OUT)
GPIO.setup(button, GPIO.IN)
try:
	while True:
		GPIO.output(led, GPIO.input(button))
except KeyboardInterrupt:
        GPIO.cleanup()
