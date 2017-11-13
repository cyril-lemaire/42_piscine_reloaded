/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 10:58:38 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/13 11:42:13 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		ft_print_file(int fd)
{
	int		bytes_read;
	char	buffer[256];

	buffer[255] = '\0';
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, sizeof(buffer) - 1);
		if (bytes_read < 0)
		{
			write(2, "read() failed.\n", sizeof("close() failed.\n"));
			return (bytes_read);
		}
		write(1, buffer, bytes_read);
	}
	return (0);
}

int		main(int argc, char *argv[])
{
	int		print_return;
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
	print_return = ft_print_file(fd);
	if (print_return != 0)
		return (print_return);
	return (close(fd) != 0 ? 4 : 0);
}
