#include "main.h"
/**
 *  * *_memcpy - copies n bytes from memory area
 *   * @src: source of memory
 *    * @dest: destination
 *     * @n: number of bytes of memory
 *      * Return: pointer to dest
 *       */

char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int i;

			for (i = 0; i < n; i++)
					{
								dest[i] = src[i];
									}
				return (dest);
}
