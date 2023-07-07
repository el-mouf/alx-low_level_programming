#include "main.h"
/**
 *  * _strcat - concatenantes two stirngs
 *   * @src: string that will be appended
 *    * @dest: string that src will be appended to
 *     * Return: returns dest
 *      */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
