/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:09:46 by ftholoza          #+#    #+#             */
/*   Updated: 2023/11/12 14:47:42 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int				i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	i = 0;
	ptr1 = (unsigned char *) src;
	ptr2 = (unsigned char *) dest;
	if (size <= 0)
	{
		return (ft_strlen(src));
	}
	while ((size - 1 > 0) && ptr1[i])
	{
		ptr2[i] = ptr1[i];
		i++;
		size--;
	}
	ptr2[i] = '\0';
	return (ft_strlen(src));
}
