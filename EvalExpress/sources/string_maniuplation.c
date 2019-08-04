/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_maniuplation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 09:12:38 by chford            #+#    #+#             */
/*   Updated: 2018/11/10 11:45:59 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*allocate_parenthesis(char *str)
{
	int		i;
	int		j;
	char	*section;

	i = 0;
	j = 0;
	while (str[i] != '\0' && str[i] != ')')
	{
		if (str[i] == '(')
			j = 0;
		i++;
		j++;
	}
	if (i == j)
		return (0);
	section = (char *)malloc(sizeof(char) * (j + 1));
	return (section);
}

char	*create_section(char *str, char *section)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (str[i] != '\0' && str[i] != ')')
	{
		if (str[i] == '(')
			j = 0;
		i++;
		j++;
	}
	i = (i - j) + 1;
	k = 0;
	while (str[i] != ')')
	{
		section[k] = str[i];
		i++;
		k++;
	}
	return (section);
}
