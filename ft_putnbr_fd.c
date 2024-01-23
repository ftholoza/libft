/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 08:11:07 by ftholoza          #+#    #+#             */
/*   Updated: 2023/11/10 16:08:09 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/*void	ft_putchar_fd(int fd, char c)
{
	write(fd, &c, 1);
}*/

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;

	nb = (long int) n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb / 10)
		ft_putnbr_fd((nb / 10), fd);
	ft_putchar_fd(((nb % 10) + 48), fd);
}
/*int	main()
{
	ft_putnbr_fd(10, 1);
}*/
