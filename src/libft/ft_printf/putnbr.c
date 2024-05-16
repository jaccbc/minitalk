/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:39:54 by joandre-          #+#    #+#             */
/*   Updated: 2024/01/02 23:31:19 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

size_t	putnbr(int n)
{
	size_t	size;
	char	*nbr;

	nbr = ft_itoa(n);
	size = ft_strlen(nbr);
	free(nbr);
	ft_putnbr_fd(n, 1);
	return (size);
}
