/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 18:55:22 by chford            #+#    #+#             */
/*   Updated: 2018/11/04 21:37:22 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	increment(int **board, int row, int col);

int		**create_board(char **argv)
{
	int		**board;
	int		i;
	int		j;

	i = 0;
	j = 0;
	board = (int **)malloc(9 * sizeof(int *));
	while (i < 9)
	{
		board[i] = (int *)malloc(9 * sizeof(int));
		while (j < 9)
		{
			if (argv[i + 1][j] == '.')
				board[i][j] = 0;
			else
				board[i][j] = (((argv[i + 1][j]) - '0') * -1);
			j++;
		}
		j = 0;
		i++;
	}
	return (board);
}

int		verify_input(char **argv)
{
	int		i;
	int		j;

	j = 0;
	i = 1;
	while (i <= 9)
	{
		while (argv[i][j] != '\0')
		{
			if ((argv[i][j] < '0' || argv[i][j] > '9') && argv[i][j] != '.')
				return (1);
			j++;
		}
		if (j != 9)
			return (1);
		j = 0;
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		**board;
	int		row;
	int		col;

	if ((argc != 10) || (verify_input(argv) == 1))
	{
		write(1, "Error!\n", 8);
		return (0);
	}
	col = 0;
	row = 0;
	board = create_board(argv);
	increment(board, row, col);
}
