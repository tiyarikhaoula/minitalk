/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:37:11 by ktiyari           #+#    #+#             */
/*   Updated: 2024/05/04 16:37:15 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minitalk.h" 

int send_signal(int pid, char c)
{
    int shift;

    shift = 7;
    while (shift > 0)
    {
        if((msg >> i) & 1)
    }
}

int main(int argc, char* argv[])
{
    char    *msg;
    int     pid;
    int     i;

    i = 0;
    if (argc != 3 || !ft_isdigit(pid))
	{
		ft_printf("\nError accured! Either too muh arguments or invalid PID\n");
		return (0);
	}
    msg = argv[2];
    pid = ft_atoi(argv[1]);
    
    while(!msg)
    {
        send_signal(pid, msg[i]);
        i++;
    }
}