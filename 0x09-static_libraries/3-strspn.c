#include "main.h"
/**
 *  * _strspn - gets the length of a prefix substring
 *   * @s: string to search
 *    * @accept: string that contains the characters that are allowed
 *     * to be in the prefix substring
 *      * Return: number of bytes in the initial segment of s
 *       */

unsigned int _strspn(char *s, char *accept)
{
		int i, j;
			unsigned int bytes = 0;

				for (i = 0; s[i] != '\0'; i++)
						{
									for (j = 0; s[j] != '\0'; j++)
												{
																if (s[i] == accept[j])
																				{
																									bytes++;
																													break;
																																}
																		}
											if (s[j] == '\0')
														{
																		return (bytes);
																				}
												}
					return (bytes);
}
