/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 12:38:37 by chford            #+#    #+#             */
/*   Updated: 2018/11/12 13:00:46 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		num;

	num = 0;
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if(str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] > '9' || str[i] < '0')
			break ;
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num *= sign);
}

int		main(void)
{
	char	num[] = "            +21474856456546456";
	int		integer;
	int		real;

	integer = ft_atoi(num);
	real = atoi(num);
	printf("ft_atoi: %d\n\n", integer);
	printf("atoi: %d\n\n", real);
	return (0);
}
