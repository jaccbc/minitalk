/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 01:07:57 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/26 18:31:07 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	len;
	size_t	i;

	len = 0;
	while (len < n && dst[len])
		len++;
	if (len == n)
		return (len + ft_strlen(src));
	dst += len;
	i = 0;
	while (src[i])
	{
		if ((n - len - 1) > i)
			*dst++ = src[i];
		i++;
	}
	*dst++ = '\0';
	return (len + i);
}
/*
int	main(void)
{
	char	*str = "Praesent sed sodales purus.";
	char	dst[sizeof(str) + 20 + 1] = "Ut et blandit nisi. ";

	printf("STRING:\t\t\t[%s]\n", str);
	printf("DESTINATION:\t\t[%s]\n", dst);
	printf("CONCATENATE SIZE:\t[%zu]\n", ft_strlcat(dst, str, 47 + 1));
	printf("CONCATENATED RESULT:\t[%s]\n", dst);
	return (0);
}*/
