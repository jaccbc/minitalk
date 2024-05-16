/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:28:10 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/26 15:32:49 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	size;
	size_t	i;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (size > i)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	ft_next_char(unsigned int i, char c)
{
	if (c)
		c += i;
}
int	main(void)
{
	char	*str = "Phasellus efficitur.";

	printf("ORIGINAL:\t[%s]\n", str);
	printf("MODIFIED:\t[%s]\n", ft_strmapi(str, &ft_next_char));
	return (0);
}*/
