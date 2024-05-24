/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 20:10:46 by joandre-          #+#    #+#             */
/*   Updated: 2024/05/24 01:40:37 by joandre-         ###   ########.fr       */
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
			while (av[1][i] >= '0' && av[1][i] <= '9')
				++i;
			if (av[1][i] == '\0')
				return (true);
		}
	}
	write(STDERR_FILENO, "./client <PID> <STRING>\n", 24);
	return (false);
}

void	feedback(int signum)
{
	if (signum == SIGUSR2)
		write(1, "\nMESSAGE SENT!\n", 15);
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
			pause();
		}
		++msg;
	}
	bit = 8;
	while (bit--)
	{
		kill(dst, SIGUSR2);
		pause();
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	act;

	if (!argcheck(argc, argv))
		return (1);
	act.sa_flags = 0;
	act.sa_handler = feedback;
	if (sigaction(SIGUSR1, &act, NULL) == -1
		|| sigaction(SIGUSR2, &act, NULL) == -1)
		return (-1);
	send_msg(ft_atoi(argv[1]), argv[2]);
	return (0);
}
