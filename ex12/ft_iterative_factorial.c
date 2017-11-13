/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 10:36:34 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/07 10:46:15 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int n)
{
	int		res;

	if (n < 0 || n > 11)
	{
		return (0);
	}
	res = 1;
	while (n > 0)
	{
		res *= n--;
	}
	return (res);
}
