void	ft_bzero(void *s, size_t n)
{
	unsigned char *p;
	unsigned int i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
