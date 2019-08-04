/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 12:03:04 by chford            #+#    #+#             */
/*   Updated: 2018/11/02 12:22:35 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_size(char **argv)
{
	int		i;
	int		j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j] != '\0')
			j++;
		i++;
	}
	return (i);
}

char	*ft_join(char **tab, char *sep)
{
	int		i;
	int		j;
	int		stri;
	char	*string;

	i = 0;
	j = 0;
	stri = 0;
	string = (char *)malloc(get_size(tab) * sizeof(char));
	while (tab[i])
	{
		j = 0;
		while (tab[i][j] != *sep)
		{
			string[stri] = tab[i][j];
			j++;
			stri++;
		}
		stri++;
		i++;
	}
	string[stri] = '\n';
	return (string);
}
