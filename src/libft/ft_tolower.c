/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 01:15:54 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/10 01:16:23 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
int	main(void)
{
	int	ch[] = {'g', 'a', 'Z', 78, 0};

	for (int i = 0; i < 5; i++)
	{
		printf("BEFORE:\t[%c]\t", ch[i]);
		printf("AFTER:\t[%c]\n", ft_tolower(ch[i]));
	}
	return (0);
}*/
