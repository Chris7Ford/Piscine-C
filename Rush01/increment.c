/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   increment.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 15:29:48 by chford            #+#    #+#             */
/*   Updated: 2018/11/04 21:37:52 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int		checker(int value, int **array, int row, int column);
void	backwards(int **board, int row, int col);
void	increment(int **board, int row, int col);

void	move_forward(int **board, int row, int col)
{
		if (col < 8)
		{
			col += 1;
			increment(board, row, col);
		}
		else if (row < 8)
		{
			col = 0;
			row += 1;
			increment(board, row, col);
		}
}

void	increment(int **board, int row, int col)
{
	if (board[row][col] == 9)
		backwards(board, row, col);
	if (board[row][col] >= 0)
	{
		board[row][col] += 1;
		while (checker(board[row][col], board, row, col) == 0)
		{
			if (board[row][col] < 9)
				board[row][col] += 1;
			else
				increment(board, row, col);
		}
	}
	move_forward(board, row, col);
	increment(board, row, col);
}

void	backwards(int **board, int row, int col)
{
	if (board[row][col] == 9)
	{
		board[row][col] = 0;
		backwards(board, row, col);
	}
	else if (board[row][col] <= 0)
	{
		if (col == 0 && row > 0)
		{
			row -= 1;
			col = 9;
		}
		else if (col > 0)
			col -= 1;
	}
	increment(board, row, col);
}
