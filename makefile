#Makefile
#OS-Lab-2
# Group 1 - CRN: 74026
all: myshell

myshell: myshell.c utility.c
	gcc -o myshell myshell.c utility.c -I.


