/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:17:49 by ftholoza          #+#    #+#             */
/*   Updated: 2023/11/09 15:10:45 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		lensrc;
	int		i;

	i = 0;
	lensrc = ft_strlen(s);
	dup = malloc (sizeof (char) * (lensrc + 1));
	if (!dup)
		return (dup);
	dup[lensrc] = '\0';
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	return (dup);
}
