/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:36:22 by chford            #+#    #+#             */
/*   Updated: 2018/11/08 21:39:03 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H

# define HEADER_H
# define BUF_SIZE 4096

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_puterr(char *str);
int		ft_strcmp(char *s1, char *s2);

#endif
