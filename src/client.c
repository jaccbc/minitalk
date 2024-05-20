/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 20:10:46 by joandre-          #+#    #+#             */
/*   Updated: 2024/05/20 04:11:03 by joandre-         ###   ########.fr       */
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
	ft_putstr_fd("./client <PID> <STRING>\n", 2);
	return (false);
}

void	feedback(int signum)
{
	if (signum == SIGUSR1)
		ft_putstr_fd("SERVER CONFIRMED MESSAGE ARRIVAL!\n", 1);
}

static void	send_msg(pid_t dst, const char *msg)
{
	unsigned int		bit;

	while (*msg)
	{
		bit = 8;
		while (bit--)
		{
			if ((*msg >> bit) & 1)
				kill(dst, SIGUSR1);
			else
				kill(dst, SIGUSR2);
			usleep(42);
		}
		++msg;
	}
	bit = 8;
	while (bit--)
	{
		usleep(42);
		kill(dst, SIGUSR2);
	}
	pause();
}

int	main(int argc, char **argv)
{
	struct sigaction	act;

	if (!argcheck(argc, argv))
		return (1);
	act.sa_handler = feedback;
	act.sa_flags = 0;
	if (sigemptyset(&act.sa_mask) == -1
		|| sigaction(SIGUSR1, &act, NULL) == -1
		|| sigaction(SIGUSR2, &act, NULL) == -1)
		return (-1);
	send_msg(ft_atoi(argv[1]), argv[2]);
	return (0);
}
