#include "holberton.h"

/**
  * _strlen - returns the length of a string
  * @s: pointer that points to an int variable with a value assigned by
  * 2-main.c
  * Return: string length
  */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
