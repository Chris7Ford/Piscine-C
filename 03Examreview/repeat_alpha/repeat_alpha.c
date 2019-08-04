/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 09:27:49 by chford            #+#    #+#             */
/*   Updated: 2018/11/09 09:59:36 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	repeat_alpha(char *argv)
{
	int		i;
	int		j;

	i = 0;
	while (argv[i])
	{
		if ((argv[i] >= 'a' && argv[i] <= 'z'))
		{
			j = 0;
			while (j <= (argv[i] - 'a'))
			{
				ft_putchar(argv[i]);
				j++;
			}	
		}
		else if ((argv[i] >= 'A' && argv[i] <= 'Z'))
		{
			j = 0;
			while (j <= (argv[i] - 'A'))
			{
				ft_putchar(argv[i]);
				j++;
			}	
		}
		else
			ft_putchar(argv[i]);
		i++;
	}
}
