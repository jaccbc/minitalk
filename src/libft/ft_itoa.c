/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 22:00:27 by joandre-          #+#    #+#             */
/*   Updated: 2023/10/13 22:03:46 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_get_size(int n)
{
	size_t	size;

	size = 0;
	if (n <= 0)
		size = 1;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static void	ft_convert_int(size_t size, int n, char *num)
{
	size_t	x;

	x = 0;
	if (n == -2147483648)
	{
		num[0] = '-';
		num[1] = '2';
		n = 147483648;
		x = 2;
	}
	if (n < 0)
	{
		num[0] = '-';
		n = -n;
		x = 1;
	}
	while (size - x)
	{
		num[size - 1] = n % 10 + '0';
		n /= 10;
		size--;
	}
}

char	*ft_itoa(int n)
{
	char	*num;
	size_t	size;

	size = ft_get_size(n);
	num = malloc(size + 1);
	if (!num)
		return (NULL);
	ft_convert_int(size, n, num);
	num[size] = '\0';
	return (num);
}
/*
int	main(void)
{
	int	nbr[] = {-2147483648, 2147483647, 0, '\0', -41255};

	for (int i = 0; i < 6; i++)
		printf("[%s]\n", ft_itoa(nbr[i]));
	return (0);
}*/
