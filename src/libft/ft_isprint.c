/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:29:42 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/04 15:29:44 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	int	ch[] = {' ', 'Y', 'a', '\0', '9'};

	for (int i = 0; i < 5; i++)
	{
		printf("[%c]\t", ch[i]);
		if (ft_isprint(ch[i]))
			printf("[TRUE]\n");
		else
			printf("[FALSE]\n");
	}
	return (0);
}*/
