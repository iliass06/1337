/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fadi <iel-fadi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 23:44:27 by iel-fadi          #+#    #+#             */
/*   Updated: 2025/10/17 00:10:08 by iel-fadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void    *memmove(void *dst, const void *src, size_t len)
{
	int i;
	unsigned char *p;
	unsigned char *pt;

	p = (unsigned char *)dst;
	pt = (unsigned char *)src;
	i = len - 1;
	while (i >= 0)
	{
		p[i] = pt[i];
		i--;
	}
	return dst;
}

int main()
{
	char *src = "abcdef";

	memmove(src + 2, src, 4);
	printf("%s", src);
}

