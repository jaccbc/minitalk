/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 03:41:33 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/10 03:51:01 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	size_t	size;

	size = ft_strlen(src) + 1;
	dst = malloc(size);
	if (!dst)
		return (NULL);
	ft_memcpy(dst, src, size);
	return (dst);
}
/*
int	main(void)
{
	char	*str = "Duis sed auctor nibh.";

	printf("ORIGINAL:\t[%s]\n", str);
	printf("DUPLICATE:\t[%s]\n", ft_strdup(str));
	return (0);
}*/
