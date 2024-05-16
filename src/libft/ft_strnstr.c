/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 01:12:08 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/10 01:12:22 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	size;

	if (!(*s2))
		return ((char *)s1);
	if (!n)
		return (NULL);
	size = ft_strlen(s2);
	while (*s1 && n >= size)
	{
		if (*s1 == *s2 && ft_strncmp(s1, s2, size) == 0)
			return ((char *)s1);
		s1++;
		n--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*str1 = "Maecenas viverra fermentum suscipit.";
	char	*str2 = "cenas";

	printf("STRING 1:\t[%s]\n", str1);
	printf("STRING 2:\t[%s]\n", str2);
	printf("RESULT:\t\t[%s]\n", ft_strnstr(str1, str2, strlen(str1)));
	return (0);
}*/
