/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 15:58:08 by chford            #+#    #+#             */
/*   Updated: 2018/10/30 16:16:40 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	i;
	int j;

	i = argc;
	while (i > 1)
	{
		j = 0;
		while (argv[i - 1][j] != '\0')
		{
			ft_putchar(argv[i - 1][j]);
			j++;
		}
		ft_putchar('\n');
		i--;
	}
	return (0);
}
