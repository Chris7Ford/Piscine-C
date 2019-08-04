/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:41:14 by chford            #+#    #+#             */
/*   Updated: 2018/11/08 21:37:31 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*verify_name(int argc)
{
	char	*errors[3];
	int		i;

	i = 0;
	errors[0] = NULL;
	errors[1] = "Too many arguments.\n";
	errors[2] = "File name missing.\n";
	if (argc > 2)
		i = 1;
	else if (argc < 2)
		i = 2;
	return (errors[i]);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	*filename;
	char	buffer[BUF_SIZE + 1];

	if (verify_name(argc))
	{
		ft_puterr(verify_name(argc));
		return (0);
	}
	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	while ((ret = read(fd, buffer, BUF_SIZE)))
	{
		buffer[ret] = '\0';
		ft_putstr(buffer);
	}
	if (ret == -1)
		return (0);
	return (0);
}
