void *ft_memset(void *destination, int value, size_t size)
{
	
	int i;
	unsigned char *p;

	i = 0;
	p = (unsigned char *)destination;
	while (i < size)
	{
		p[i] = (unsigned char) value;
		i++;
	}
	return destination;
}
