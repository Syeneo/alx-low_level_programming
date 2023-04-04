#include "main.h"

/**
* _strspn - gets lengthof a prefix substring
* @s: string to check
* @accept: string to check against
*
* Return: number of bytes of s in accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);

}
