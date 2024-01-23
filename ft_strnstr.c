/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:29:03 by ftholoza          #+#    #+#             */
/*   Updated: 2023/11/15 16:01:39 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;
	size_t			j;

	ptr1 = (unsigned char *) big;
	ptr2 = (unsigned char *) little;
	i = 0;
	j = 0;
	if (len == 0 && (!big))
		return (NULL);
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while ((i <= len - ft_strlen(little)) && ptr1[i])
	{
		if (len <= 0)
			return (NULL);
		if (!ft_strncmp((big + i), little, ft_strlen(little)))
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>

int main(void)
{
	char *big = "aaabcabcd";
	char *little = "abcd";
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0));
}*/	
