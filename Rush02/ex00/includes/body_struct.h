/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   body_struct.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 06:49:13 by chford            #+#    #+#             */
/*   Updated: 2018/11/11 22:51:56 by mbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BODY_STRUCT_H
# define BODY_STRUCT_H

typedef struct		s_body_obj
{
	int				height;
	int				width;
	char			*expected;
	char			*received;
	t_list			*begin_list;
}					t_main_obj;

#endif
