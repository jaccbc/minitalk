/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:11:49 by joandre-          #+#    #+#             */
/*   Updated: 2024/01/04 13:09:45 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	fsrc;
	size_t	i;
	int		out;

	if (!format)
		return (-1);
	va_start(fsrc, format);
	out = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			out += route_specifier(fsrc, format[++i]);
			i++;
		}
		else
		{
			ft_putchar_fd(format[i++], 1);
			out++;
		}
	}
	va_end(fsrc);
	return (out);
}
/*
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	char			*s = "Suspendisse potenti.";
	int				c = 'L';
	int				i = INT_MAX;
	int				d = INT_MIN;
	unsigned int	u = 0;
	unsigned int	x = INT_MAX;
	unsigned int	X = UINT_MAX;
	void			*p = malloc(sizeof(void *));
	int				out = 0;;

	printf("\t***\tORIGINAL\t***\n\n");
	out += printf("[%%%%]\t[%%]\n[%%s]\t[%s]\n[%%c]\t[%c]\n",
			s, c);
	out += printf("[%%i]\t[%i]\n[%%d]\t[%d]\n[%%u]\t[%u]\n",
			i, d, u);
	out += printf("[%%x]\t[%x]\n[%%X]\t[%X]\n[%%p]\t[%p]\n",
			x, X, p);
	printf("[CHARACTERS PRINTED\t%i]\n", out);
	out = 0;
	ft_printf("\n\n\t***\tFT_PRINTF\t***\n\n");
	out += ft_printf("[%%%%]\t[%%]\n[%%s]\t[%s]\n[%%c]\t[%c]\n",
			s, c);
	out += ft_printf("[%%i]\t[%i]\n[%%d]\t[%d]\n[%%u]\t[%u]\n",
			i, d, u);
	out += ft_printf("[%%x]\t[%x]\n[%%X]\t[%X]\n[%%p]\t[%p]\n",
			x, X, p);
	ft_printf("[CHARACTERS PRINTED\t%i]\n", out);
	free(p);
	return (0);
}*/
