/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 09:52:29 by chford            #+#    #+#             */
/*   Updated: 2018/11/09 13:44:03 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	inter(char *s1, char *s2);

int		main(void)
{
	char s1[] = "padinton";
	char s2[] = "paqefwtdjetyiytjneytjoeyjnejeyj";
	char s3[] = "ddf6vewg64f";
	char s4[] = "gtwthgdwthdwfteewhrtag6h4ffdhsd";
	char s5[] = "rien";
	char s6[] = "cette phrase ne cache rien";

	inter(s1, s2);
	write(1, "\n", 1);
	inter(s3, s4);
	write(1, "\n", 1);
	inter(s5, s6);
	write(1, "\n", 1);
	return (0);
}
