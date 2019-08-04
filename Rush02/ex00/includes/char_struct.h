/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_struct.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 21:07:04 by chford            #+#    #+#             */
/*   Updated: 2018/11/11 22:37:27 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAR_STRUCT_H
# define CHAR_STRUCT_H

typedef struct		s_list
{
	char			string[BUF_SIZE + 1];
	struct s_list	*next;
}					t_list;

#endif
