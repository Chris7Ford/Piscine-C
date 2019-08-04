/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 06:58:52 by chford            #+#    #+#             */
/*   Updated: 2018/11/06 20:08:17 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>

int		determine(char **argv);
int		evaluate(int num1, int num2, int(*f)(int, int));
int		ft_atoi(char *str);
int		add(int num1, int num2);
int		subtract(int num1, int num2);
int		multiply(int num1, int num2);
int		divide(int num1, int num2);
int		modulus(int num1, int num2);
int		verify(int argc, char **argv);
int		zero_check(char **argv);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
#endif
