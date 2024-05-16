/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 00:54:47 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/15 01:51:01 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putstr_fd("-2147483648", fd);
			return ;
		}
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n / 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
/*
int	main(void)
{
	int	nbr[] = {-2147483648, 2147483647, 325, -44, 300};

	for (int i = 0; i < 5; i++)
	{
		ft_putchar_fd('[', 1);
		ft_putnbr_fd(nbr[i], 1);
		ft_putstr_fd("]\n", 1);
	}
	return (0);
}*/
