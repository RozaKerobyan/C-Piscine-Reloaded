/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 18:01:51 by rkerobya          #+#    #+#             */
/*   Updated: 2025/01/18 17:56:13 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_display(char *n)
{
	char	j;
	int		fd;
	int		i;

	fd = open(n, O_RDONLY);
	i = read(fd, &j, 1);
	if (fd == -1)
	{
		return (0);
	}
	while (i > 0)
	{
		write(1, &j, 1);
		i = read(fd, &j, 1);
	}
	if (i == -1)
	{
		return (0);
		close(fd);
	}
	close(fd);
	return (1);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
	{
		write(1, "File name missing.\n", 19);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
	}
	else
	{
		if (!ft_display(argv[1]))
		{
			write(2, "Cannot read file.\n", 18);
		}
	}
	return (0);
}
