/*
* File: keyled.c
* Author: [Ian Booth W0513690]
* Date: 2026/01/29
* Description: This file contains a simple function that
* takes a user input of a number between 0-7 and displays that
* in binary on the keyboard lights.
*/


#include <linux/kd.h> //KDSETLED
#include <sys/ioctl.h>
#include <unistd.h> //sleep()
#include <stdio.h>
#include <stdlib.h>

int main () {
	int num[] = {0,1,4,5,2,3,6,7}; //this array holds the correct order that the LEDs on the keyboard will light up
	int key; //holds the user input

	scanf("%d", &key); //uses scanf and stores entry in key in variable
	ioctl(1,KDSETLED, num[key]); //lights up the corresponding LEDS based on the user input key and the spot in the array num
}
