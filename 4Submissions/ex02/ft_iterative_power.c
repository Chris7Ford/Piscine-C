/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 13:20:46 by chford            #+#    #+#             */
/*   Updated: 2018/10/27 12:58:55 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int pc;
	int nc;
	int total;

	pc = power;
	nc = nb;
	total = 1;
	if (nb < 0)
		return (0);
	if (pc == 0)
		return (1);
	while (pc > 0)
	{
		total = total * nc;
		pc--;
	}
	return (total);
}
