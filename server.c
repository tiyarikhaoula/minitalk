/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:37:25 by ktiyari           #+#    #+#             */
/*   Updated: 2024/05/04 16:37:29 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minitalk.h"

void	sighandler(int sig)
{
	static char	byte;
	static int	len;

	byte <<= 1;
	if (sig == SIGUSR1)
		byte |= 1;
	len++;
	if (len == 8)
	{
		write(1, &byte, 1);
		byte = 0;
		len = 0;
	}
}

int	main(void)
{
	int	pid;

	pid = getpid();
	printf("Process ID: %d\n", pid);
	printf("Waiting for messages...\n");
	signal(SIGUSR1, sighandler);
	signal(SIGUSR2, sighandler);
	while (1)
		pause();
	return (0);
}
