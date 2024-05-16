/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 01:10:15 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/10 01:10:20 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s1 == *s2 && n)
	{
		s1++;
		s2++;
		n--;
	}
	if (!n)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/*
int	main(void)
{
	char	*str1 = "Vestibulum rutrum porta mi vitae iaculis.";
	char	*str2 = "Vestibulum rutrum porta mu vitae iaculis.";

	printf("STRING 1:\t[%s]\n", str1);
	printf("STRING 2:\t[%s]\n", str2);
	printf("DIFFERENCE:\t[%d]\n", ft_strncmp(str1, str2, strlen(str1)));
	return (0);
}*/
