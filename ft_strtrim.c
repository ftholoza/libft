/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:13:40 by ftholoza          #+#    #+#             */
/*   Updated: 2023/11/19 16:07:51 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_is_set(const char c, char const *set)
{
	int				i;
	unsigned char	*ptrset;

	ptrset = (unsigned char *) set;
	i = 0;
	while (ptrset[i])
	{
		if (ptrset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_check_ptr(char const *s1, char const *set)
{
	int				i;
	int				j;
	int				count;
	unsigned char	*ptr;

	ptr = (unsigned char *) s1;
	i = 0;
	j = 0;
	count = 0;
	while (ft_is_set(ptr[i], set))
	{
		i++;
		count++;
	}
	while (ptr[j])
		j++;
	if (j == i)
		return (-1);
	while (ft_is_set(ptr[j - 1], set))
	{
		count++;
		j--;
	}
	return (count);
}

static void	ft_fill_res2(char *res, const char *s1, const char *set)
{
	unsigned char	*ptr;
	unsigned int	i;
	int				j;
	unsigned int	count;

	ptr = (unsigned char *) s1;
	i = 0;
	j = 0;
	count = 0;
	while (ptr[i])
		i++;
	while (ft_is_set(ptr[i - 1], set) && i > 0)
	{
		i--;
		count++;
	}
	i = 0;
	while (ft_is_set(ptr[i], set))
		i++;
	while (i < (ft_strlen((char const *)ptr) - count))
	{
		res[j] = ptr[i];
		i++;
		j++;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*res;
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	if (!s1)
		return (NULL);
	if (ft_check_ptr(s1, set) == -1)
		return (ft_strdup(""));
	else
		count = ft_check_ptr(s1, set);
	res = malloc (sizeof(char) * ((ft_strlen(s1) - count) + 1));
	if (!res)
		return (res);
	res[ft_strlen(s1) - count] = '\0';
	ft_fill_res2(res, s1, set);
	return (res);
}
/*#include <stdio.h>
int	main(void)
{
	char *const s1 = "   xxxx  xxxxx xxxx xxx    ";
	char *const set = " ";
	printf("%s\n",ft_strtrim(s1, set));
}*/
