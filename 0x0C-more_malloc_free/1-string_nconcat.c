#include "main.h"
#include <stdlib.h>
/**
  * string_nconcat - function that concatenates two strings
  * @s1: string to concatenate to
  * @s2: string to be concatenated from
  * @n: number of bytes to be concatenated from s2 to s1
  *
  * Return: pointer to newly allocated space or NULL (fails)
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i =0, j = 0, len1 =0, len2 = 0;

	while
