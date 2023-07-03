#include <stdio.h>

/**
 * execbeforemain - Function that prints before main function
 *
 * Return: Always 0.
 */
void execbeforemain(void) __attribute__ ((constructor));

void execbeforemain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
