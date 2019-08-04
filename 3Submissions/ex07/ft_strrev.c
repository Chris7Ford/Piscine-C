/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 06:57:21 by chford            #+#    #+#             */
/*   Updated: 2018/10/26 16:36:14 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
char	*ft_strrev(char *str)
{
	int i;
	int j;
	char letter;

	i = 0;
	while (str[i + 1] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < ((i + 1) / 2))
	{
		letter = str[j];
		str[j] = str[i - j];
		str[i - j] = letter;
		j++;
	}
	return (str);
}

int		main(void)
{
	char word[10] = "Chris";

	ft_strrev(word);
	printf("%s", ft_strrev(word));
}
