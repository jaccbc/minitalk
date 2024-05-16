/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joandre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 01:30:58 by joandre-          #+#    #+#             */
/*   Updated: 2024/05/16 02:56:54 by joandre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static void	handle_sigm(pid_t sig, siginfo_t *info, void *context)
{
	static unsigned int		b = 0;
	static unsigned int		c = 0;

	(void)context;
	if (sig == SIGUSR1)
		++c;
	if (++b == 8)
	{
		if (c == '\0')
		{
			ft_putstr_fd("\n\n", 1);
			kill(SIGUSR2, info->si_pid);
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

	act.sa_sigaction = &handle_sigm;
	act.sa_flags = SA_SIGINFO;
	ft_printf("PID: %i\n\n", getpid());
	while (1)
	{
		if (sigaction(SIGUSR1, &act, NULL) == -1)
			return (-1);
		if (sigaction(SIGUSR2, &act, NULL) == -1)
			return (-1);
		pause();
	}
	return (0);
}
