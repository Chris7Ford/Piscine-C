/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pburton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 10:21:12 by pburton           #+#    #+#             */
/*   Updated: 2018/11/04 19:47:37 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		checker(int value, int **array, int row, int column)
{
	int i;
	int gridrow = 3 * (row / 3);
	int gridcol = 3 * (column / 3);
	int gridr1 = (row + 1) % 3;
	int gridr2 = (row + 2) % 3;
	int gridc1 = (column + 1) % 3;
	int gridc2 = (column + 2) % 3;

	i = 0;
	while (i < 9)
	{
		if ((array[i][column] == value) && i != row)
			return (0);
		i++;
	}
	i = 0;
	while (i < 9)
	{
		if ((array[row][i] == value) && i != column)
			return (0);
		i++;
	}
	if (array[gridr1 + gridrow][gridc1 + gridcol] == value)
		return (0);
	if (array[gridr1 + gridrow][gridc2 + gridcol] == value)
		return (0);
	if (array[gridr2 + gridrow][gridc1 + gridcol] == value)
		return (0);
	if (array[gridr2 + gridrow][gridc2 + gridcol] == value)
		return (0);
	else
		return (1);
}
