import time

try:
	while True:
		st = time.time()
		time.sleep(0.001)
		et = time.time()
		print et-st
		time.sleep(0.1)
except KeyboardInterrupt:
	print "Ending Program"
