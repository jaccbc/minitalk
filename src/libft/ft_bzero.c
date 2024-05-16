/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:33:20 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/04 16:36:34 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*bz;

	bz = s;
	while (n--)
		*bz++ = '\0';
}
/*
int	main(void)
{
	char	str[] = "Cave canem.";

	printf("[ORIGINAL]\t[%p]\n[MEMORY]\t[", str);
	for (int i = 0; i < sizeof(str); i++)
	{
		printf("%d", str[i]);
		if (i == sizeof(str) - 1)
		{
			printf("]\n");
			break ;
		}
		printf("|");
	}
	printf("[STRING]\t[%s]\n\n", str);
	ft_bzero(str, sizeof(str));
	printf("[MODIFIED]\t[%p]\n[MEMORY]\t[", str);
	for (int i = 0; i < sizeof(str); i++)
	{
		printf("%d", str[i]);
		if (i == sizeof(str) - 1)
		{
			printf("]\n");
			break ;
		}
		printf("|");
	}
	printf("[STRING]\t[%s]\n", str);
	return (0);
}*/
