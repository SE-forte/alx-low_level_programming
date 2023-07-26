#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: destination string pointer.
 * @src: source string pointer.
 * Return: pointer to destination string.
 */

void _strcat(char *dest, const char *src)
{
	int length_of_string, z;

	int j = 0;

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}
	for (z = 0; src[z] != '\0'; z++, length_of_string++)
	{
		dest[length_of_string] = src[j];
		_strcat(dest, src);
	}
	dest[length_of_string] = '\0';
	return (dest);
}
