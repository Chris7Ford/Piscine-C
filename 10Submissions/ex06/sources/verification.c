/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verification.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 21:25:05 by chford            #+#    #+#             */
/*   Updated: 2018/11/06 12:26:36 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		verify(int argc, char **argv)
{
	int		i;

	if (argc != 4)
		return (0);
	i = 0;
	while (argv[2][i] != '\0')
	{
		if (i > 0 || (argv[2][i] != '+' && argv[2][i] != '-' &&
			argv[2][i] != '*' && argv[2][i] != '/' && argv[2][i] != '%'))
		{
			ft_putchar('0');
			return (0);
		}
		i++;
	}
	return (1);
}

int		zero_check(char **argv)
{
	if (argv[2][0] == '/' && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : division by zero", 24);
		return (0);
	}
	else if (argv[2][0] == '%' && ft_atoi(argv[3]) == 0)
	{
		write(1, "Stop : modulo by zero", 22);
		return (0);
	}
	return (1);
}
