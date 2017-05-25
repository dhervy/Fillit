/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetri.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdjeffal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 16:12:10 by sdjeffal          #+#    #+#             */
/*   Updated: 2016/01/22 14:49:57 by sdjeffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_deltetri(t_tetri tetri, char **tab)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (tab[y])
	{
		while (tab[y][x])
		{
			if (tab[y][x] == tetri.name)
				tab[y][x] = '.';
			x++;
		}
		y++;
		x = 0;
	}
}

int		ft_checkput(t_tetri tetri, char **tab, int ln, int cn)
{
	int i;

	i = -1;
	while (++i < 4)
	{
		if ((size_t)tetri.p[i].x + ln >= ft_strlen(tab[0]) ||
				(size_t)tetri.p[i].y + cn >= ft_strlen(tab[0]))
			return (0);
		if (!(tab[tetri.p[i].y + cn][tetri.p[i].x + ln] == '.'))
			return (0);
	}
	i = -1;
	while (++i < 4)
	{
		tab[tetri.p[i].y + cn][tetri.p[i].x + ln] = tetri.name;
	}
	return (1);
}

void	ft_tetrisetpoint(t_tetri *tetri, int x, int y, size_t index)
{
	if (tetri)
	{
		tetri->p[index].x = x;
		tetri->p[index].y = y;
	}
}
