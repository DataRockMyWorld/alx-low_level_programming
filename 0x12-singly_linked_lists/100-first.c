#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * printb4_main - prints a text before the main is executed
 *
 *
 *
 * Return: the address of the new element, or NULL if it fails
 */
void __attribute__((constructor)) printb4_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
