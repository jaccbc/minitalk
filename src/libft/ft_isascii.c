/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:29:13 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/04 15:29:16 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	ch[] = {'s', '\0', -342, ' ', 255};

	for (int i = 0; i < 5; i++)
	{
		printf("[%c]\t", ch[i]);
		if (ft_isascii(ch[i]))
			printf("[TRUE]\n");
		else
			printf("[FALSE]\n");
	}
	return (0);
}*/
