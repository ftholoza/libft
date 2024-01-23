/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:00:42 by ftholoza          #+#    #+#             */
/*   Updated: 2023/11/12 14:46:34 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*str;

	if ((nmemb >= SIZE_MAX) || (size >= SIZE_MAX))
		return (NULL);
	if (size <= 0)
	{
		str = malloc(1);
		ft_memset(str, 0, 1);
		return (str);
	}
	if (((nmemb * size) / size) != nmemb)
		return (NULL);
	str = malloc(nmemb * size);
	if (!str)
		return (str);
	ft_memset(str, 0, nmemb * size);
	return (str);
}
