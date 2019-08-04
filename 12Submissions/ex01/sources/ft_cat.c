/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:48:29 by chford            #+#    #+#             */
/*   Updated: 2018/11/08 20:36:28 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print_content(char *filename)
{
	int		fd;
	int		ret;
	char	buffer[BUF_SIZE + 1];

	fd = open(filename, O_RDWR);
	if (fd == -1 && errno == 13)
		fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("ft_cat: ");
		ft_putstr(filename);
		if (errno == 21)
			ft_putstr(" : Is a directory\n");
		else
			ft_putstr(" : No such file or directory\n");
		return ;
	}
	while ((ret = read(fd, buffer, BUF_SIZE)))
	{
		buffer[ret] = '\0';
		ft_putstr(buffer);
	}
	if (ret == -1)
		return ;
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		print_content(argv[i]);
		i++;
	}
	return (0);
}
