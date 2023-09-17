#include "../ctob.h"

#include <stdio.h>

int	main(void)
{
	unsigned short	*res;
	char			c;

	res = ctob('c');
	printf("%d%d%d%d%d%d%d%d\n", res[0], res[1], res[2], res[3], res[4], res[5], res[6], res[7]);
	c = btoc(res);
	free(res);
	printf("%c\n", c);
}
