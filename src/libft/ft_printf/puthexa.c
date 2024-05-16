/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:58:33 by joandre-          #+#    #+#             */
/*   Updated: 2024/01/04 13:04:16 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static void	hexalloc(char c, char *hexa)
{
	while (*hexa)
		hexa++;
	*hexa = c;
}

static void	hextoa(unsigned int n, char *hexa, const char specifier)
{
	if (n >= 16)
	{
		hextoa(n / 16, hexa, specifier);
		hextoa(n % 16, hexa, specifier);
	}
	if (n <= 9)
		hexalloc(n + '0', hexa);
	else if (n < 16)
	{
		if (specifier == 'X')
			hexalloc(n - 10 + 'A', hexa);
		else if (specifier == 'x')
			hexalloc(n - 10 + 'a', hexa);
	}
}

static void	long_hextoa(unsigned long long n, char *hexa)
{
	if (n >= 16)
	{
		long_hextoa(n / 16, hexa);
		long_hextoa(n % 16, hexa);
	}
	if (n <= 9)
		hexalloc(n + '0', hexa);
	else if (n < 16)
		hexalloc(n - 10 + 'a', hexa);
}

static size_t	addrtoa(unsigned long long n, char *hexa)
{
	if (n == 0)
	{
		hexa = NULL;
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	long_hextoa(n, hexa);
	ft_putstr_fd("0x", 1);
	return (2);
}

size_t	puthexa(unsigned long long n, const char specifier)
{
	size_t	size;
	char	*hexa;

	size = 0;
	hexa = (char *)ft_calloc(sizeof(char), 16 + 1);
	if (!hexa)
		return (size);
	if (specifier == 'x' || specifier == 'X')
		hextoa(n, hexa, specifier);
	else if (specifier == 'p')
		size = addrtoa(n, hexa);
	size += ft_strlen(hexa);
	ft_putstr_fd(hexa, 1);
	free(hexa);
	return (size);
}
