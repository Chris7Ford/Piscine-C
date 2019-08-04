/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 13:58:43 by chford            #+#    #+#             */
/*   Updated: 2018/11/01 18:37:21 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_size(int argc, char **argv)
{
	int		i;
	int		j;
	int		size;

	i = 1;
	size = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			j++;
		size += j;
		i++;
	}
	size += i;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		stri;
	char	*string;

	i = 1;
	j = 0;
	stri = 0;
	get_size(argc, argv);
	string = (char *)malloc(get_size(argc, argv) * sizeof(char));
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			string[stri] = argv[i][j];
			j++;
			stri++;
		}
		if (i != (argc - 1))
			string[stri] = '\n';
		stri++;
		i++;
	}
	return (string);
}
