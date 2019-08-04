/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 08:36:47 by chford            #+#    #+#             */
/*   Updated: 2018/11/02 16:12:40 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int holda;
	int holdb;
	int holdc;
	int holdd;

	holda = ***a;
	holdb = *b;
	holdc = *******c;
	holdd = ****d;
	*******c = holda;
	****d = holdc;
	*b = holdd;
	***a = holdb;
}
