/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   route_specifier.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 22:38:30 by joandre-          #+#    #+#             */
/*   Updated: 2023/11/25 20:56:49 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

size_t	route_specifier(va_list fsrc, const char specifier)
{
	size_t	out;

	out = 1;
	if (specifier == '%')
		ft_putchar_fd('%', 1);
	else if (specifier == 'c')
		ft_putchar_fd(va_arg(fsrc, int), 1);
	else if (specifier == 's')
		out = putstr(va_arg(fsrc, char *));
	else if (specifier == 'i' || specifier == 'd')
		out = putnbr(va_arg(fsrc, int));
	else if (specifier == 'u')
		out = putunbr(va_arg(fsrc, unsigned int));
	else if (specifier == 'x' || specifier == 'X' || specifier == 'p')
		out = puthexa(va_arg(fsrc, unsigned long long), specifier);
	return (out);
}
