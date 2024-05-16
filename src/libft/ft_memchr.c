/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 01:02:45 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/10 01:02:55 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*mch;

	mch = (unsigned char *)s;
	while (n && *mch != (unsigned char)c)
	{
		mch++;
		n--;
	}
	if (!n)
		return (NULL);
	return ((void *)mch);
}
/*
int	main(void)
{
	char	*str = "Senectus et netus et malesuada.";
	char	ch = 'e';
	void	*mem = ft_memchr((void *)str, ch, strlen(str));

	printf("STRING:\t\t[%s]\n", str);
	printf("CHARACTER:\t[%c]\n", ch);
	if (mem)
	{
		printf("RESULT:\t\t[FOUND]\t[%s]\n", (char *)mem);
	}
	else
		printf("RESULT:\t\t[NOT FOUND]\n");
	return (0);
}*/
