/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 20:10:46 by joandre-          #+#    #+#             */
/*   Updated: 2024/06/01 00:40:56 by joandre-         ###   ########.fr       */
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
			if (av[1][i] == '\0' && av[2][0])
				return (true);
		}
	}
	ft_putstr_fd("./client <PID> <STRING>\n", STDERR_FILENO);
	return (false);
}

void	feedback(int sig)
{
	static int	i = 0;

	if (sig == SIGUSR1 && i)
		ft_putstr_fd("\nMESSAGE SENT!\n", STDOUT_FILENO);
	else if (sig == SIGUSR2)
		i = 1;
}

static void	send_byte(pid_t dst, const char c)
{
	unsigned int	bit;

	bit = 8;
	while (bit--)
	{
		if ((c >> bit) & 1)
			kill(dst, SIGUSR1);
		else
			kill(dst, SIGUSR2);
		pause();
	}
}

static void	send_msg(pid_t dst, const char *msg)
{
	while (*msg)
	{
		send_byte(dst, *msg);
		++msg;
	}
	send_byte(dst, *msg);
	pause();
}

int	main(int argc, char **argv)
{
	struct sigaction	act;

	if (!argcheck(argc, argv))
		return (1);
	if (sigemptyset(&act.sa_mask) == -1)
		return (-1);
	act.sa_flags = 0;
	act.sa_handler = feedback;
	if (sigaction(SIGUSR1, &act, NULL) == -1
		|| sigaction(SIGUSR2, &act, NULL) == -1)
		return (-1);
	send_msg(ft_atoi(argv[1]), argv[2]);
	return (0);
}
