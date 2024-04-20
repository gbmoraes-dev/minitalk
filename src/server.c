/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoraes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:38:22 by gamoraes          #+#    #+#             */
/*   Updated: 2024/04/19 22:59:11 by gamoraes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	print_pid(void)
{
	ft_printf("%s", "Server initialized with PID: ");
	ft_printf("%d", getpid());
	ft_printf("%s", "          By: gamoraes :)");
	ft_printf("%c", '\n');
	ft_printf("%c", '\n');
}

void	handle_signal(int signal)
{
	static int				i;
	static unsigned char	current;

	current |= (signal == SIGUSR1);
	i++;
	if (i == 8)
	{
		if (current == '\0')
			ft_printf("%c", "\n");
		else
			ft_printf("%c", current);
		i = 0;
		current = 0;
	}
	else
		current <<= 1;
}

int	main(int argc, char **argv)
{
	(void)argv;
	if (argc != 1)
	{
		ft_printf("%s%s", "Usage: ./server\n", RED);
		exit(1);
	}
	print_pid();
	signal(SIGUSR1, handle_signal);
	signal(SIGUSR2, handle_signal);
	while (1)
		pause();
	return (0);
}
