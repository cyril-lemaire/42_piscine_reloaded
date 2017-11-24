/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 10:49:43 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/24 10:50:20 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_print_file(int fd)
{
	unsigned int	read_bytes;
	char			buffer[256];

	while ((read_bytes = read(fd, buffer, sizeof(buffer) - 1)) > 0)
	{
		buffer[read_bytes] = '\0';
		write(1, buffer, read_bytes);
	}
}

int		main(int argc, char *argv[])
{
	int		fd;

	if (argc == 1)
	{
		write(2, "File name missing.\n", sizeof("File name missing.\n"));
		return (1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", sizeof("Too many arguments.\n"));
		return (2);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (3);
	ft_print_file(fd);
	return (close(fd) != 0 ? 4 : 0);
}
