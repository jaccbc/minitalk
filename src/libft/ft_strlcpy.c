/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 00:43:38 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/26 16:13:24 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	if (!n)
		return (ft_strlen(src));
	i = 0;
	while ((n - 1 > i) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	*str = "Ut in imperdiet leo.";
	char	dst[sizeof(str) + 1];

	printf("STRING:\t\t[%s]\n", str);
	printf("STRING SIZE:\t[%zu]\n", ft_strlcpy(dst, str, strlen(str) + 1));
	printf("DESTINATION:\t[%s]\n", dst);
	return (0);
}*/
