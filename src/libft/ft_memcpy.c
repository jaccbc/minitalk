/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:37:04 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/04 16:58:08 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	if (!dst && !src)
		return (dst);
	while (n--)
		*d++ = *s++;
	return (dst);
}
/*
int	main(void)
{
	char	str[] = "Quisque ac magna tellus.";
	char	dst[sizeof(str)];

	printf("ORIGINAL:\t[%s]\n", str);
	printf("COPIED:\t\t[%s]\n", (char *)ft_memcpy(dst, str, strlen(str)));
	return (0);
}*/
