/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 10:51:14 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/13 10:26:49 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		res;
	int		i;

	i = 0;
	res = 0;
	while (tab[i][0] != '\0')
	{
		res += (f(tab[i++]) == 1);
	}
	return (res);
}
