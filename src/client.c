/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gamoraes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:14:17 by gamoraes          #+#    #+#             */
/*   Updated: 2024/04/19 22:50:12 by gamoraes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

void	send_signal(int pid, unsigned char character)
{
	int				i;
	unsigned char	temp;

	i = 7;
	temp = character;
	while (i >= 0)
	{
		temp = character >> i;
		if (temp % 2 == 0)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		i--;
		usleep(SLEEP_TIME);
	}
}

void	send_message(int pid, char *message)
{
	int	i;

	i = 0;
	while (message[i])
	{
		send_signal(pid, message[i]);
		i++;
	}
	send_signal(pid, '\n');
}

int	main(int argc, char **argv)
{
	int		pid;
	char	*message;

	if (argc != 3)
	{
		ft_printf("%s%s", "Usage: ./client [PID] [MESSAGE]", RED);
	}
	pid = ft_atoi(argv[1]);
	message = argv[2];
	send_message(pid, message);
	return (0);
}
