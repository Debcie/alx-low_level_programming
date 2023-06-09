#include "main.h"

/**
  * _strncpy - copies a string with n
  * @dest: where the string is copied to
  * @src: where the string is copied from
  * @n: number of char to be copied to dest in bytes
  * Return: pointer to dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	for (; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
