/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 18:36:29 by chford            #+#    #+#             */
/*   Updated: 2018/11/01 18:53:50 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		get_word_count(char *string)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (string[i] != '\0')
	{
		if (string[i] != '\t' && string[i] != '\n' &&
			string[i] != ' ')
		{
			if (string[i + 1] == '\t' || string[i + 1] == '\n' ||
					string[i + 1] == ' ' || string[i + 1] == '\0')
				count++;
		}
		i++;
	}
	return (count);
}

void	allocate_word_memory(char **p, char *string)
{
	int		l;
	int		i;
	int		j;

	j = 0;
	l = 0;
	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] != '\t' && string[i] != '\n' &&
			string[i] != ' ')
		{
			j++;
			if (string[i + 1] == '\t' || string[i + 1] == '\n' ||
					string[i + 1] == ' ' || string[i + 1] == '\0')
			{
				p[l] = (char *)malloc(sizeof(char) * (j + 1));
				j = 0;
				l++;
			}
		}
		i++;
	}
	p[l] = (char *)malloc(sizeof(char));
}

void	write_words(char **array, char *string)
{
	int		l;
	int		i;
	int		j;

	i = 0;
	j = 0;
	l = 0;
	while (string[i] != '\0')
	{
		if (string[i] != '\t' && string[i] != '\n' &&
			string[i] != ' ')
		{
			array[l][j] = string[i];
			j++;
			if (string[i + 1] == '\t' || string[i + 1] == '\n' ||
					string[i + 1] == ' ' || string[i + 1] == '\0')
			{
				array[l][j] = '\0';
				j = 0;
				l++;
			}
		}
		i++;
	}
	array[i] = 0;
}

char	**ft_split_whitespaces(char *str)
{
	int		wordcount;
	char	**array;

	wordcount = get_word_count(str);
	array = (char **)malloc((wordcount + 1) * sizeof(char *));
	allocate_word_memory(array, str);
	write_words(array, str);
	return (array);
}
