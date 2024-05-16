/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 01:06:54 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/10 01:07:22 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
	}
	if (c == 0)
		return (str);
	return (NULL);
}
/*
int	main(void)
{
	char	*str = "Quisque ac magna tellus.";
	int	ch = 'a';

	printf("STRING:\t[%s]\n", str);
	printf("CHAR:\t[%c]\n", ch);
	printf("RESULT:\t[%s]\n", ft_strchr(str, ch));
	return (0);
}*/
