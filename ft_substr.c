/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:43:13 by ftholoza          #+#    #+#             */
/*   Updated: 2023/11/14 22:49:54 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char	*ptr;
	char			*sub;
	size_t			sublen;
	size_t			i;

	if (!s)
		return (NULL);
	ptr = (unsigned char *) s;
	sublen = (ft_strlen(s) - start);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (sublen > len)
		sublen = len;
	sub = malloc(sizeof(char) * (sublen + 1));
	if (!sub)
		return (sub);
	i = 0;
	while (i < sublen)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
