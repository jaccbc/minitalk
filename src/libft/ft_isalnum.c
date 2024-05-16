/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:28:36 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/04 15:28:45 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	ch[] = {'+', 65, '~', '0', 'G'};

	for (int i = 0; i < 5; i++)
	{
		printf("[%c]\t", ch[i]);
		if (ft_isalnum(ch[i]))
			printf("[TRUE]\n");
		else
			printf("[FALSE]\n");
	}
	return (0);
}*/
