#include "main.h"

/**
  * _strncpy - copies a string with n
  * @dest: where the string is copied to
  * @src: where the string is copied from
  * @n: number of char to be copied to dest
  * Return: pointer to dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
