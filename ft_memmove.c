/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:03:22 by ftholoza          #+#    #+#             */
/*   Updated: 2023/11/12 14:49:57 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "stdlib.h"
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dst1;
	unsigned char	*src2;
	int				i;

	dst1 = (unsigned char *) dest;
	src2 = (unsigned char *) src;
	i = 0;
	if (src < dest)
	{
		while (n > 0)
		{
			dst1[n - 1] = src2[n - 1];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*#include <stdio.h>
int	main(void)
{
	char sResult[] = {67, 68, 67, 68, 69, 0, 45};
		//dest    67| 68  67  68  69 0 45
		//res	  67, 67, 68, 68, 69, 0, 45};
	
	ft_memmove((sResult + 1), sResult, 2);

	printf("%s\n", sResult);
}*/
