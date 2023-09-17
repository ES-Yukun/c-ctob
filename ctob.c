#include "ctob.h"

#include <stdio.h>

unsigned short	*ctob(unsigned char c)
{
	unsigned char	bit;
	unsigned short	*res;

	res = calloc(9, sizeof(short));
	if (res == NULL)
		return (NULL);
	bit = 0b10000000;
	while (bit != 0)
	{
		if (c & bit)
			*res = 1;
		res++;
		bit >>= 1;
	}
	return (res - 8);
}