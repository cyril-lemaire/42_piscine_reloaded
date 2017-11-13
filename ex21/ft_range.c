/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 09:36:42 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/13 12:16:54 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*res;

	if (min > max)
	{
		return (0);
	}
	i = 0;
	res = (int*)malloc((max - min) * sizeof(int));
	while (i < max - min)
	{
		res[i] = min + i;
		++i;
	}
	return (res);
}
