/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:30:40 by joandre-          #+#    #+#             */
/*   Updated: 2023/11/25 19:45:18 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

size_t	putstr(const char *format)
{
	size_t	size;

	if (!format)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	size = ft_strlen(format);
	ft_putstr_fd((char *)format, 1);
	return (size);
}
