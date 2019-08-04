/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 19:20:54 by chford            #+#    #+#             */
/*   Updated: 2018/10/25 07:07:30 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	int numbers[3];

	numbers[0] = '0';
	while (numbers[0] <= '9')
	{
		numbers[1] = numbers[0] + 1;
		while (numbers[1] <= '9')
		{
			numbers[2] = numbers[1] + 1;
			while (numbers[2] <= '9')
			{
				ft_putchar(numbers[0]);
				ft_putchar(numbers[1]);
				ft_putchar(numbers[2]);
				if (numbers[0] == '7' && numbers[1] == '8' && numbers[2] == '9')
					break ;
				ft_putchar(',');
				ft_putchar(' ');
				numbers[2]++;
			}
			numbers[1]++;
		}
		numbers[0]++;
	}
}
