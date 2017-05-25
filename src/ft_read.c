/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhervy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 18:29:22 by dhervy            #+#    #+#             */
/*   Updated: 2016/01/22 16:20:45 by sdjeffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "fillit.h"

char	*ft_read(char *argv)
{
	int		i;
	int		fd;
	char	*str;
	char	buf;

	i = 0;
	fd = open(argv, O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, &buf, 1))
		i++;
	if (!(str = ft_strnew(i + 1)))
		return (0);
	close(fd);
	i = 0;
	if ((fd = open(argv, O_RDONLY)) == -1)
		return (0);
	while (read(fd, &buf, 1))
		str[i++] = buf;
	close(fd);
	str[i] = '\0';
	return (str);
}
