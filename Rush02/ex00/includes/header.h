/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 13:46:09 by chford            #+#    #+#             */
/*   Updated: 2018/11/11 23:12:11 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# define BUF_SIZE 8192

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "char_struct.h"
# include "body_struct.h"

char	*add_to_string(char c, char *compare);
char	*allocate_comparison(int height, int width, char *compare);
char	*ft_strcpy(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
t_list	*ft_create_elem(char *buffer);
t_list	*read_input(t_main_obj *obj);
void	compare(t_main_obj *obj);
void	create_array_f_pointers(void (*pointers)(int, int, char *));
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	print_result(int i, int count, t_main_obj *obj, int *printed_count);
void	push_queue(t_list **begin_list, char*buffer);
void	rush00(int x, int y, char *compare);
void	rush01(int x, int y, char *compare);
void	rush02(int x, int y, char *compare);
void	rush03(int x, int y, char *compare);
void	rush04(int x, int y, char *compare);
void	mash_input(t_main_obj *obj);
void	write_zeros(char *string);
int		get_width(char *compare);
int		get_height(char *compare);

#endif
