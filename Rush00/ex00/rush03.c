/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyulee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 13:36:50 by hyulee            #+#    #+#             */
/*   Updated: 2018/10/28 20:30:22 by cdias-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printwidth(int y, int x)
{
	int countx;

	countx = 1;
	if (y == 1)
	{
		ft_putchar('A');
		while (countx <= x)
		{
			ft_putchar('B');
			countx++;
		}
		ft_putchar('C');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('B');
		while (countx <= x)
		{
			ft_putchar(' ');
			countx++;
		}
		ft_putchar('B');
		ft_putchar('\n');
	}
}

void	justheights(int y)
{
	ft_putchar('A');
	ft_putchar('\n');
	while (y > 0)
	{
		ft_putchar('B');
		ft_putchar('\n');
		y--;
	}
	ft_putchar('A');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int county;
	int	linecheck;

	if (y == 1 && x == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
	else if (y > 1 && x == 1)
		justheights(y - 2);
	else
	{
		county = 1;
		linecheck = 1;
		while (county <= y)
		{
			if (county == 1 || county == y)
				printwidth(linecheck, x - 2);
			else
				printwidth(county, x - 2);
			county++;
		}
	}
}
