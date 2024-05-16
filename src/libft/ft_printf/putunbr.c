/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putunbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:58:33 by joandre-          #+#    #+#             */
/*   Updated: 2023/12/08 16:53:28 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static void	print_unbr(unsigned int n)
{
	if (n / 10)
	{
		print_unbr(n / 10);
		print_unbr(n % 10);
	}
	else if (n < 10)
		ft_putchar_fd(n + '0', 1);
}

static size_t	get_size(unsigned int n)
{
	size_t	size;

	size = 0;
	if (n == 0)
		size = 1;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

size_t	putunbr(unsigned int n)
{
	size_t	size;

	size = get_size(n);
	print_unbr(n);
	return (size);
}
