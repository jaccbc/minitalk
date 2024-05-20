/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 01:30:58 by joandre-          #+#    #+#             */
/*   Updated: 2024/05/20 03:57:02 by joandre-         ###   ########.fr       */
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
		if (c == '\0')
		{
			ft_putstr_fd("\n\n", 1);
			kill(info->si_pid, SIGUSR1);
		}
		else
			ft_putchar_fd(c, 1);
		b = 0;
		c = 0;
	}
	else
		c <<= 1;
}

int	main(void)
{
	struct sigaction	act;

	act.sa_flags = SA_SIGINFO;
	act.sa_sigaction = sigmsg;
	if (sigemptyset(&act.sa_mask) == -1
		|| sigaction(SIGUSR1, &act, NULL) == -1
		|| sigaction(SIGUSR2, &act, NULL) == -1)
		return (-1);
	ft_printf("PID: %i\n\n", getpid());
	while (1)
		pause();
	return (0);
}
