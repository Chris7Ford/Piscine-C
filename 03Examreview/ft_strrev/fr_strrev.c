/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:01:49 by chford            #+#    #+#             */
/*   Updated: 2018/11/09 14:12:05 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		count;
	int		max;
	char	hold;

	count = (ft_strlen(str) - 1);
	max = count;
	i = -1;
	while (++i <= (max / 2))
	{
		hold = str[count];
		str[count] = str[i];
		str[i] = hold;
		count--;
	}
	return (str);
}
