#include "lists.h"
#include <stdio.h>

void _constructor(void) __attribute__((constructor));

/**
 * _constructor - a constructor function
 *
 * Return: Nothing.
 */

void __constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
