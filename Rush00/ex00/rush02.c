/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 18:33:58 by chford            #+#    #+#             */
/*   Updated: 2018/10/28 21:03:14 by cdias-fl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printwidth(int y, int x)
{
	int		countx;
	char	in[1];
	char	out[1];

	countx = 1;
	in[0] = 'B';
	if (y == 1)
		out[0] = 'A';
	else if (y == 2)
		out[0] = 'C';
	else
	{
		out[0] = 'B';
		in[0] = ' ';
	}
	ft_putchar(out[0]);
	while (countx <= x)
	{
		ft_putchar(in[0]);
		countx++;
	}
	ft_putchar(out[0]);
	ft_putchar('\n');
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
	ft_putchar('C');
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
			if (county == 1)
				printwidth(1, x - 2);
			else if (county == y && county != 1)
				printwidth(2, x - 2);
			else
				printwidth(0, x - 2);
			county++;
		}
	}
}
