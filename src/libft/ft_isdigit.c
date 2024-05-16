/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:29:51 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/04 15:29:53 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	ch[] = {'7', ' ', '\\', '9', '1'};

	for (int i = 0; i < 5; i++)
	{
		printf("[%c]\t", ch[i]);
		if (ft_isdigit(ch[i]))
			printf("[TRUE]\n");
		else
			printf("[FALSE]\n");
	}
	return (0);
}*/
