/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhcosta- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 17:22:12 by jhcosta-          #+#    #+#             */
/*   Updated: 2026/05/23 17:22:14 by jhcosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	int		bytes_read;
	char	buffer[4096];

	bytes_read = 0;
	if (argc < 2)
	{
		write(2, "File name missing. \n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments. \n", 20);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	bytes_read = read(fd, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		bytes_read = read(fd, buffer, sizeof(buffer));
	}
	close(fd);
	return (0);
}
