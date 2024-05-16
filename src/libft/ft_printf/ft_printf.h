/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:23:16 by joandre-          #+#    #+#             */
/*   Updated: 2024/05/12 19:34:42 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft.h"
# include <stdarg.h>

size_t	putstr(const char *format);
size_t	putnbr(int n);
size_t	putunbr(unsigned int n);
size_t	puthexa(unsigned long long n, const char specifier);
size_t	route_specifier(va_list fsrc, const char specifier);
int		ft_printf(const char *format, ...);

#endif
