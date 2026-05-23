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
#include <fcnt1.h>

int	main(int argc, char **argv)
{
	int		fd;
	int		bytes;
	char	buffer[100];

	if (argc == 1)
		write(2, "File name missing. \n", 19);
	else if (argc > 2)
		write(2, "Too many arguments. \n", 20);
	else
	{
		fd = open(argv[1], O_RDONLY);
		while ((bytes = read(fd, buffer, 100)) > 0)
		{
			write(1, buffer, bytes);
		}
		close(fd);
	}	
}
