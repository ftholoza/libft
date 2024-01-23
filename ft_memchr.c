/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:58:39 by ftholoza          #+#    #+#             */
/*   Updated: 2023/11/13 18:51:26 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	int				i;

	i = 0;
	ptr = (unsigned char *) s;
	while (n > 0)
	{
		if (ptr[i] == (unsigned char) c)
			return ((void *)(s + i));
		i++;
		n--;
	}
	return (NULL);
}
