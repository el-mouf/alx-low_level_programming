#include "main.h"
/**
 *  * _strncat - concatenantes two strings
 *   * uses n bytes from src
 *    * @src: first string
 *     * @dest: result string
 *      * @n: number of bytes used from src
 *       * Return: returns dest
 *        */

char *_strncat(char *dest, char *src, int n)
{
		int i, j;

			i = 0;
				j = 0;

					while (dest[i] != '\0')
							{
										i++;
											}
						while (src[j] != '\0' && j < n)
								{
											dest[i] = src[j];
													i++;
															j++;
																}
							dest[i] = '\0';
								return (dest);
}
