/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width_height.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 16:07:06 by mbutt             #+#    #+#             */
/*   Updated: 2018/11/11 22:49:52 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_width(char *compare)
{
	int		new_width;
	int		a;

	new_width = 0;
	a = 0;
	while (compare[a] != '\n')
	{
		a++;
		new_width++;
	}
	return (new_width);
}

int		get_height(char *compare)
{
	int		new_height;
	int		a;

	new_height = 0;
	a = 0;
	while (compare[a] != '\0')
	{
		if (compare[a] == '\n')
		{
			new_height++;
		}
		a++;
	}
	return (new_height);
}
