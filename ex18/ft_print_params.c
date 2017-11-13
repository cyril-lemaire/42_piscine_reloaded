/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:23:26 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/07 11:35:39 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(int c);

void	ft_putstrln(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i++]);
	}
	ft_putchar('\n');
}

int		main(int argc, char *argv[])
{
	int		i;

	i = 0;
	while (++i < argc)
	{
		ft_putstrln(argv[i]);
	}
	return (0);
}
