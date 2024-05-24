/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 01:30:58 by joandre-          #+#    #+#             */
/*   Updated: 2024/05/24 01:43:52 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sigmsg(pid_t sig, siginfo_t *info, void *context)
{
	static unsigned int		b = 0;
	static unsigned char	c = 0;

	(void)context;
	if (sig == SIGUSR1)
		++c;
	if (++b == 8)
	{
		if (c)
			write(STDOUT_FILENO, &c, 1);
		else
		{
			write(STDOUT_FILENO, "\n\n--------------------\n\n", 24);
			kill(info->si_pid, SIGUSR2);
		}
		b = 0;
		c = 0;
	}
	else
		c <<= 1;
	usleep(1);
	kill(info->si_pid, SIGUSR1);
}

int	main(void)
{
	struct sigaction	act;

	act.sa_flags = SA_SIGINFO;
	act.sa_sigaction = sigmsg;
	if (sigaction(SIGUSR1, &act, NULL) == -1
		|| sigaction(SIGUSR2, &act, NULL) == -1)
		return (-1);
	ft_printf("PID: %i\n\n", getpid());
	while (1)
		pause();
	return (0);
}
