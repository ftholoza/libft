/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:50:53 by ftholoza          #+#    #+#             */
/*   Updated: 2023/11/19 16:07:07 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	ft_fill_join(char *res, unsigned char *ptr1, unsigned char *ptr2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (ptr1[i])
	{
		res[i] = ptr1[i];
		i++;
	}
	while (ptr2[j])
	{
		res[i] = ptr2[j];
		i++;
		j++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	int				i;
	char			*res;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	ptr1 = (unsigned char *) s1;
	ptr2 = (unsigned char *) s2;
	res = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!res)
		return (res);
	res[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	ft_fill_join(res, ptr1, ptr2);
	return (res);
}
