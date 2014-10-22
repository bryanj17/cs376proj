# This is a makefile for ~/robots
# Author: Tanya L. Crenshaw
CC=gcc

robots.out:	main.c robot.o robot.h beckerg17.o beckerg17.h
	$(CC) -o robots.out main.c robot.o beckerg17.o

robot.o:	robot.c robot.h
	$(CC) -c robot.c

beckerg17.o:    beckerg17.c beckerg17.h
	$(CC) -c beckerg17.c
