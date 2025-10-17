
#include<stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int i;
	unsigned char *p;
	unsigned char *pt;

	i = 0;
	p = (unsigned char *)dest;
	pt = (unsigned char *)src;
	while (i < n)
	{
		p[i] = pt[i];
		i++;
	}
	return dest;
}