/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:10:46 by ftholoza          #+#    #+#             */
/*   Updated: 2023/11/12 14:53:38 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "unistd.h"
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	int				temp;
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	i = 0;
	temp = -1;
	if (c == 0)
		return ((char *)(s + ft_strlen(s)));
	while (ptr[i])
	{
		if (ptr[i] == (char) c)
			temp = i;
		i++;
	}
	if (temp == -1)
		return (NULL);
	return ((char *)(s + temp));
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
	char *pointer;
	const char *destination = "la la la la la la la la";
	pointer = ft_strrchr(destination, 'a' );
	printf("%s\n", pointer); 
}
*/
