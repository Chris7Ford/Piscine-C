/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 09:52:29 by chford            #+#    #+#             */
/*   Updated: 2018/11/09 14:10:14 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strrev(char *str);

int		main(void)
{
	char string[] = "Alex! :)";

	printf("%s", ft_strrev(string));
	write(1, "\n", 1);
	return (0);
}
