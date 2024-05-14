/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktiyari <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 20:34:43 by ktiyari           #+#    #+#             */
/*   Updated: 2024/05/04 20:34:46 by ktiyari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "minitalk.h" 

int	ft_isdigit(char *str)
{
	while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0; 
        str++;
    }
    return 1;
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
		i++;
	write(1, s, i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	rst;

	i = 0;
	sign = 1;
	rst = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+')
	i++;
	else if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= 48 && str[i] <= 57)
	{
		rst *= 10;
		rst += str[i] - '0';
		i++;
	}
	return (rst * sign);
}