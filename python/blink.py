import RPi.GPIO as GPIO  
import time  
# blinking function  
def blink(pin, ond, offd):  
	GPIO.output(pin,GPIO.HIGH)  
        time.sleep(ond)  
        GPIO.output(pin,GPIO.LOW)  
        time.sleep(offd)
        return
pinNum = 16
onDel = float(raw_input("Enter On Delay: "))
offDel = float(raw_input("Enter off Delay: "))
# to use Raspberry Pi board pin numbers  
GPIO.setmode(GPIO.BOARD)  
# set up GPIO output channel  
GPIO.setup(pinNum, GPIO.OUT)  
# blink GPIO17 50 times
i = 0    
try:
	while True:
		print "Iteration: ", i
		blink(pinNum,onDel, offDel)
		i += 1
except KeyboardInterrupt:
	pass
finally:
	GPIO.cleanup()   
