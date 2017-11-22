import serial
from playsound import playsound
from sys import argv
from os import system
from time import sleep

#Supply com port and baud rate as arguments

com = argv[1]
baud = argv[2]

ser = serial.Serial(com, baud)
while True:
	command =  ser.readline()
	if command == "say\n":
		#system("say -v Alex Good Morning Makers")
		playsound('A.wav')
		sleep(2)
	
	elif command == "time\n":
		system("say Hey Guys! How are you doing?")
	 	sleep(2)
		system("say Ok let me tell you date and time")
		sleep(2)
		system("say Today is")
		system("date | say -v ALEX") 
