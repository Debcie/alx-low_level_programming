#include "main.h"

/**
  * _memset -  function fills the first n bytes of the memory area
  * @n: memory area to be filled
  * @s: pointer to the memory area
  * @b: constant value
  * Return: pointer to the memory area
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
