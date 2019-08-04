/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 19:04:26 by chford            #+#    #+#             */
/*   Updated: 2018/11/01 19:31:07 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour >= 0 && hour <= 24)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		if (0 < hour && hour < 11)
			printf("%d A.M. AND %d A.M.", hour, (hour + 1));
		else if (hour == 11)
			printf("%d A.M. AND %d P.M.", hour, (hour + 1));
		else if (12 < hour && hour < 23)
			printf("%d P.M. AND %d P.M.", (hour - 12), (hour - 11));
		else if (hour == 12)
			printf("%d P.M. AND %d P.M.", (hour), (hour - 11));
		else if (hour == 0 || hour == 24)
			printf("%d A.M. AND %d A.M.", 0, 1);
		else if (hour == 23)
			printf("%d P.M. AND %d A.M.", 11, 12);
	}
}
