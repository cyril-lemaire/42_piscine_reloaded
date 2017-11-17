/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 09:36:42 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/13 15:44:44 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*res;

	if (min >= max)
	{
		return (NULL);
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
