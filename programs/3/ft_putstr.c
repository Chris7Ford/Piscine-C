/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 18:40:22 by chford            #+#    #+#             */
/*   Updated: 2018/10/26 07:51:15 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while (i < str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}

}

int		main(void)
{
	char string[6] = "Chris";
	ft_putstr(string);
	return (0);
}
