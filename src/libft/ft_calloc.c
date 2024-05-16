/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 03:05:44 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/10 03:32:54 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = malloc(num * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, num * size);
	return (ptr);
}
/*
int	main(void)
{
	void	*mem = ft_calloc(sizeof(char), 5);
	char	*nbr = (char *)mem;

	if (mem)
	{
		printf("[MEMORY ALLOCATED]\t[");
		for (int i = 0; i < (sizeof(char) * 5); i++)
		{
			printf("%d", nbr[i]);
			if (i == (sizeof(char) * 5) - 1)
				break ;
			printf("|");
		}
		printf("]\n");
	}
	else
		printf("[MEMORY ALLOCATION FAILURE]\n");
	free(mem);
	return (0);
}*/
