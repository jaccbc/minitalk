/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 12:02:11 by joandre-          #+#    #+#             */
/*   Updated: 2024/02/25 01:19:47 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_alloc(char **split, const char *s, char c)
{
	char		**chops;
	const char	*str;

	chops = split;
	str = s;
	while (*str)
	{
		while (*s == c)
			s++;
		str = s;
		while (*str && *str != c)
			str++;
		if (*str == c || str > s)
		{
			*chops = ft_substr(s, 0, str - s);
			s = str;
			chops++;
		}
	}
	*chops = NULL;
}

static size_t	ft_count_chops(const char *s, char c)
{
	size_t	chops;

	chops = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			chops++;
		while (*s && *s != c)
			s++;
	}
	return (chops);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_count_chops(s, c);
	split = (char **)malloc(sizeof(char *) * (size + 1));
	if (!split)
		return (NULL);
	ft_alloc(split, s, c);
	return (split);
}
/*
int	main(void)
{
	char	*str = "Nullam\thendrerit\tsem.";
	char	**split = ft_split(str, '\t');

	printf("ORIGINAL: [%s]\nRESULT:\t  ", str);
	for (int i = 0; split[i]; i++)
	{
		printf("[%s]\t", split[i]);
		free(split[i]);
	}
	free(split);
	printf("\n");
	return (0);
}*/
