#include "main.h"
/**
  * _memcpy - funtion that copies
  * @n: number or value to be copied
  * @src: copies from
  * @dest: copy to
  * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r]
			n--;
	}
	return (dest);
}


