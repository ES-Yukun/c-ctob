#include "ctob.h"

short	*ctob(char c)
{
	unsigned char	uc;
	unsigned char	bit;
	short			*res;

	res = calloc(9, sizeof(short));
	uc = (unsigned char)c;
	bit = 1 << 7;
	while (bit != 0)
	{
		if (uc & bit)
			*res++ = '1';
		else
			*res++ = '0';
		bit >>= 1;
	}
	return (res);
}
