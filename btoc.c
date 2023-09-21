#include "ctob.h"

unsigned char	btoc(unsigned short *bits)
{
	unsigned short	p;
	unsigned char	r;

	p = 0;
	r = 0;
	while (p++ < sizeof(char) * 8UL)
		r ^= *(bits++) << (sizeof(char) * 8UL - p);
	return (r);
}
