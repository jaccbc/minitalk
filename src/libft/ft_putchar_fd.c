/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 19:38:46 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/14 20:29:12 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	char	ch[] = {'s', '*', '-', '1', '\\'};

	for (int i = 0; i < 5; i++)
	{
		ft_putchar_fd('[', 1);
		ft_putchar_fd(ch[i], 1);
		ft_putstr_fd("]\n", 1);
	}
	return (0);
}*/
