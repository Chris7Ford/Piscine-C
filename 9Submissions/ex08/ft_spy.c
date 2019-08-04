/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 07:43:11 by chford            #+#    #+#             */
/*   Updated: 2018/11/02 11:35:59 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp_ignore_space_case(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[j] == '\t' || s1[j] == '\n' || s1[j] == ' ')
		j++;
	while (s1[j] != '\0' && s2[i] != '\0')
	{
		if (s1[j] != s2[i] && !(s1[j] - s2[i] == 'a' - 'A' ||
			s1[i] - s2[j] == 'A' - 'a'))
			return (s1[j] - s2[i]);
		else if (s1[j + 1] == '\0' && s2[i + 1] == '\0')
			return (0);
		i++;
		j++;
	}
	if (s1[j] != '\0')
		return (s1[j]);
	else
		return ((s2[i]) * -1);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		if (ft_strcmp_ignore_space_case(argv[i], "president") == 0 ||
			ft_strcmp_ignore_space_case(argv[i], "attack") == 0 ||
			ft_strcmp_ignore_space_case(argv[i], "Bauer") == 0)
			write(1, "Alert!!!\n", 10);
		i++;
	}
	return (0);
}
