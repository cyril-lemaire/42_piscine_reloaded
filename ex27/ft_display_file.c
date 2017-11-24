/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clemaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 10:49:43 by clemaire          #+#    #+#             */
/*   Updated: 2017/11/24 17:23:23 by clemaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_display_file(int fd_file)
{
	int		read_bytes;
	char	buff[4096];

	while ((read_bytes = read(fd_file, buff, 4096)))
	{
		if (read_bytes == -1)
		{
			write(2, "Read() on file failed.\n", 23);
			return (1);
		}
		write(1, buff, read_bytes);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	fd;
	int	read_return;

	if (argc != 2)
	{
		if (argc < 2)
			write(2, "File name missing.\n", 19);
		else if (argc > 2)
			write(2, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Open() on file failed.\n", 23);
		return (1);
	}
	read_return = ft_display_file(fd);
	if (close(fd) == -1)
	{
		write(2, "Close() on file failed.\n", 24);
		return (1);
	}
	return (read_return);
}
