int	main(void)
{
	unsigned short	*res;
	char			c;

	res = ctob('c');
	c = btoc(res);
	free(res);
	printf("%c", c);
}
