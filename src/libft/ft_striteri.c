/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 19:06:33 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/14 19:29:38 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, (s + i));
		i++;
	}
}
/*
void	ft_alpha_fwd(unsigned int set, char *s)
{
	while (*s)
		*s++ = set + 'a';
}
int	main(void)
{
	char	str[] = "Praesent sed sodales purus.";

	printf("ORIGINAL:\t[%s]\t[%p]\n", str, str);
	ft_striteri(str, ft_alpha_fwd);
	printf("MODIFIED:\t[%s]\t[%p]\n", str, str);
}*/
