# This is a makefile for ~/robots
# Author: Tanya L. Crenshaw
CC=gcc

robots.out:	main.c robot.o robot.h bryanj17.o bryanj17.h
	$(CC) -o robots.out main.c robot.o bryanj17.o

robot.o:	robot.c robot.h
	$(CC) -c robot.c

bryanj17.o:	bryanj17.c bryanj17.h
	$(CC) -c bryanj17.c
