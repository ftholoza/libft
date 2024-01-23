/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:31:37 by ftholoza          #+#    #+#             */
/*   Updated: 2023/11/19 16:05:25 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	ft_size(long int nb)
{
	int	size;

	size = 0;
	while (nb > 0)
	{
		nb /= 10;
		size++;
	}
	return (size);
}

static void	ft_fill_little(char *res, long int nb, int i)
{
	if (nb >= 0 && nb < 10)
	{
		res[i] = (nb + 48);
		return ;
	}
}

static void	ft_fill_res(char *res, int n, int sign)
{
	long int	nb;
	int			size;
	int			i;

	nb = (long int) n;
	size = 0;
	i = 0;
	if (sign == -1)
	{
		res[0] = '-';
		nb *= -1;
		i++;
		size++;
	}
	size = ft_size(nb);
	if (sign == -1)
		size++;
	ft_fill_little(res, nb, i);
	while (nb > 0)
	{
		res[size - 1] = ((nb % 10) + 48);
		nb /= 10;
		size--;
	}
}

char	*ft_itoa(int n)
{
	char		*res;
	int			size;
	int			sign;
	long int	nb;

	sign = 0;
	nb = (long int) n;
	if (nb < 0)
	{
		nb *= -1;
		sign = -1;
	}
	size = ft_size(nb);
	if (sign == -1)
		size++;
	if (n >= 0 && n < 10)
		size = 1;
	res = malloc(sizeof(char) * (size + 1));
	if (!res)
		return (res);
	res[size] = '\0';
	ft_fill_res(res, n, sign);
	return (res);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%s\n",ft_itoa(-2147483648));
}*/
