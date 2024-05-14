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
# include "minitalk.h" 
# include <stdio.h>
# include <signal.h>

void sighandler(int heee)
{
   printf("Caught signal %d\n", heee);
}

int main(int argc, char *argv[])
{
    char argv = "NULL";
    int pid;

    pid = getpid();
    printf("process ID :");
    printf(" %d\n",pid);
    printf("waiting!!");
    signal(SIGUSR1, sighandler);
    signal(SIGUSR2, sighandler);

    return 0;
}