/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 00:46:25 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/10 00:52:23 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
int	main(void)
{
	int	ch[] = {'y', '0', 112, '^', 'R'};

	for (int i = 0; i < 5; i++)
	{
		printf("BEFORE:\t[%c]\t", ch[i]);
		printf("AFTER:\t[%c]\n", ft_toupper(ch[i]));
	}
	return (0);
}*/
