/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 19:45:49 by chford            #+#    #+#             */
/*   Updated: 2018/10/27 20:23:41 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int i;

	if (nb < 1)
		return (0);
	else if (nb == 1)
		return (2);
	if (nb > 1)
	{
		i = nb - 1;
		while (i > 1)
		{
			if (nb % i == 0)
				return (ft_find_next_prime(nb + 1));
			i--;
		}
	}
	return (nb)	
}
