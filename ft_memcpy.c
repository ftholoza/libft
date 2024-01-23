/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:40:54 by ftholoza          #+#    #+#             */
/*   Updated: 2023/11/14 22:34:02 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr1;
	unsigned char		*ptr2;
	int					i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	ptr1 = (unsigned char *) dest;
	ptr2 = (unsigned char *) src;
	while (n > 0)
	{
		ptr1[i] = ptr2[i];
		i++;
		n--;
	}
	return (dest);
}
