/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 07:29:43 by ftholoza          #+#    #+#             */
/*   Updated: 2023/11/14 23:12:25 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	char			*ptr;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	ptr = (char *) s;
	res = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (res);
	res[ft_strlen(s)] = '\0';
	i = 0;
	while (i < ft_strlen(s))
	{
		res[i] = f(i, ptr[i]);
		i++;
	}
	return (res);
}
