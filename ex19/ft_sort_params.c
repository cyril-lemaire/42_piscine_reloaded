/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:37:13 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/10 10:15:40 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(int c);

void	ft_putstrln(char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i++]);
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		++i;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort(char *arr[], int size)
{
	int		i;
	char	*swap;

	while (size > 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (ft_strcmp(arr[i], arr[i + 1]) > 0)
			{
				swap = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = swap;
			}
			++i;
		}
		--size;
	}
}

int		main(int argc, char *argv[])
{
	int		i;

	ft_sort(argv, argc);
	i = 1;
	while (i < argc)
	{
		ft_putstrln(argv[i++]);
	}
}
