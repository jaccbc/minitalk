/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 20:10:46 by joandre-          #+#    #+#             */
/*   Updated: 2024/05/15 03:20:51 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static bool	argcheck(int ac, char **av)
{
	unsigned int	i;

	i = 0;
	if (ac == 3)
	{
		if (av[1] && av[2])
		{
			while (ft_isdigit(av[1][i]))
				++i;
			if (av[1][i] == '\0')
				return (true);
		}
	}
	ft_putstr_fd("[ERROR] ./client <PID> <STRING>\n", 2);
	return (false);
}

static void	send_msg(pid_t srv, const char *msg)
{
	int	bit;

	while (*msg)
	{
		bit = 8;
		while (bit--)
		{
			if ((*msg >> bit) & 1)
				kill(srv, SIGUSR1);
			else
				kill(srv, SIGUSR2);
			usleep(42);
		}
		++msg;
	}
	bit = 8;
	while (bit--)
	{
		kill(srv, SIGUSR2);
		usleep(42);
	}
}

int	main(int argc, char **argv)
{
	if (!argcheck(argc, argv))
		return (1);
	send_msg(ft_atoi(argv[1]), argv[2]);
	return (0);
}
