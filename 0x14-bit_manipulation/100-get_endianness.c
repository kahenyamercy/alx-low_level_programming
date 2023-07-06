#include "main.h"
/**
 * get_endianness - Checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
	{
		/* Least significant byte is stored first (little endian) */
		return (1);
	}
	else
	{
		/* Most significant byte is stored first (big endian) */
		return (0);
	}
}
