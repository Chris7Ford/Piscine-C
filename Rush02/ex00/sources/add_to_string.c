/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:56:38 by chford            #+#    #+#             */
/*   Updated: 2018/11/11 19:30:13 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*add_to_string(char c, char *compare)
{
	int		i;

	i = 0;
	while (compare[i] != '0')
		i++;
	if (compare[i] != '\0')
		compare[i] = c;
	return (compare);
}

void	write_zeros(char *string)
{
	int		i;

	i = 0;
	while (string[i])
	{
		string[i] = '0';
		i++;
	}
}
