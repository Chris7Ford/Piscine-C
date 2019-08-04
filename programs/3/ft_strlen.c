/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 06:27:30 by chford            #+#    #+#             */
/*   Updated: 2018/10/26 14:31:57 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_strlen(char *str)
{
	int i;
	int c;

	i = 0;
	c = '0';
	while (i < str[i] != '\0')
	{
		i++;
		c++;
		if (str[i + 1] == '\0')
		{
			ft_putchar(c + 1);
			break ;
		}
	}
	return (0);
}

int		main(void)
{
	char string[10] = "Test";

	ft_strlen(string);
	return (0);
}
