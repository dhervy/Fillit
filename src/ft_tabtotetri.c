/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabtotetri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdjeffal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 16:14:58 by sdjeffal          #+#    #+#             */
/*   Updated: 2016/01/21 22:18:50 by dhervy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static t_tetri	ft_strtotetri(char *str)
{
	t_tetri	tetri;
	t_point	p_o;
	size_t	px;
	int		i;
	int		j;

	i = -1;
	j = 0;
	px = 0;
	while (str[++i])
	{
		if (str[i] == '\n')
			j++;
		if (str[i] == '#' && !px)
		{
			ft_tetrisetpoint(&tetri, 0, 0, px++);
			p_o.x = i - j * 5;
			p_o.y = j;
		}
		else if (str[i] == '#')
			ft_tetrisetpoint(&tetri, (i - j * 5) - p_o.x, j - p_o.y, px++);
	}
	return (tetri);
}

void			ft_tabtotetri(t_tetri *tabtetri, char **strtetri)
{
	int i;
	int j;

	i = -1;
	while (strtetri[++i])
	{
		j = -1;
		while (strtetri[i][++j])
			tabtetri[i] = ft_strtotetri(strtetri[i]);
		tabtetri[i].name = 65 + i;
	}
}
