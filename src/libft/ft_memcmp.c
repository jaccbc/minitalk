/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 01:03:32 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/10 01:03:38 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*cmp1;
	unsigned char	*cmp2;

	cmp1 = (unsigned char *)s1;
	cmp2 = (unsigned char *)s2;
	while (n && *cmp1 == *cmp2)
	{
		cmp1++;
		cmp2++;
		n--;
	}
	if (!n)
		return (0);
	return (*cmp1 - *cmp2);
}
/*
int	main(void)
{
	char	*str1 = "Nulla sit amet ornare risus.";
	char	*str2 = "Nulla sit-amet ornare risus.";

	printf("STRING 1:\t[%s]\n", str1);
	printf("STRING 2:\t[%s]\n", str2);
	printf("DIFFERENCE:\t[%d]\n", ft_memcmp(str1, str2, strlen(str1)));
	return (0);
}*/
