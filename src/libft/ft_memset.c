/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:46:46 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/26 15:26:10 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (n > i)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
/*
int	main(void)
{
	char	str[] = "Ut in imperdiet leo.";
	int	ch = '\\';

	printf("ORIGINAL:\t[%s]\n", str);
	printf("MODIFIED:\t[%s]\n", (char *)ft_memset(str, ch, strlen(str)));
	return (0);
}*/
