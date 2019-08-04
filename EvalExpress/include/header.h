/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 10:23:06 by chford            #+#    #+#             */
/*   Updated: 2018/11/10 18:38:09 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include "struct.h"
#include <stdlib.h>

char	*allocate_parenthesis(char *str);
char	*create_section(char *str, char *section);
char	*eval_expr(char *expression);
int		ft_atoi(char *str);
t_list	*ft_create_arithmetic_elem(char *string);
t_list	*add_arithmetic_queue(t_list **begin_list, char *string);
char	get_operator(char *string);

#endif
