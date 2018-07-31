#include "holberton.h"

/**
  * *rot13 - encodes a string using rot13
  * @s: pointer to a string
  * Return: result after encription
  */

int rot13(char *s)
{
	int scan, i, count++;
	char norm[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
'\0'};
	char rot[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};

	for (scan = 0; s[scan] != '\0'; scan++)
	{
		for (i = 0; norm[i]; i++)
			if (s[scan] == norm[i])
			{
				s[scan] = rot[i];
				_putchar(s[scan]);
				count++;
				break;
			}
	}

	return (count);
}
