/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 11:59:32 by chford            #+#    #+#             */
/*   Updated: 2018/10/26 13:25:29 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int total;

	total = 1;
	i = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i >= 1)
	{
		total = total * i;
		i--;
	}
	return (total);
}
