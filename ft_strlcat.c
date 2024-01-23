/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:53:13 by ftholoza          #+#    #+#             */
/*   Updated: 2023/11/19 16:10:26 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/*int	ft_strlen(char const *str)
{
	int i;

	i = 0;
	char *ptr;
	ptr = (char *) str;
	while(ptr[i])
		i++;
	return (i);
}

static int	ptit(unsigned int a, unsigned int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	int				j;
	size_t			sizedst;
	unsigned char	*ptr2;

	if ((!dst || !src) && (size == 0))
		return (0);
	ptr2 = (unsigned char *) src;
	i = 0;
	sizedst = 0;
	while (dst[sizedst] && (sizedst < size))
		sizedst++;
	if (size <= sizedst)
		return (size + ft_strlen(src));
	j = 0;
	while ((sizedst + i) < (size - 1) && ptr2[j])
	{
		dst[sizedst + i] = ptr2[j];
		i++;
		j++;
	}
	dst[sizedst + i] = '\0';
	return (ft_strlen(src) + sizedst);
}
/*int	main(void)
{
	char	*dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	dest[11] = 'a';
	const char * src = (char *)"lorem";
	printf("%ld\n",ft_strlcat(dest,src, 15));
	printf("%s\n", dest);
}*/
