#include "main.h"
/**
*char *_strcpy - a function that copies the string printed to by src
*@dest: copy to
*@src: copy from
*Return: String
*/
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + 1) != '\n')
	{
		l++;
	}
	for ( ; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}
