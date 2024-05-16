/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:29:03 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/04 15:31:27 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	ch[] = {45, 'b', 65, 0, 'H'};

	for (int i = 0; i < 5; i++)
	{
		printf("[%c]\t", ch[i]);
		if (ft_isalpha(ch[i]))
			printf("[TRUE]\n");
		else
			printf("[FALSE]\n");
	}
	return (0);
}*/
