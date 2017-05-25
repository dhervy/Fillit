/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhervy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 19:33:57 by dhervy            #+#    #+#             */
/*   Updated: 2016/01/22 17:00:12 by sdjeffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdlib.h>

void		ft_init(int *x, int *y, int *i)
{
	*x = 0;
	*y = 0;
	*i = 0;
}

int			ft_place(char **tab, int *var)
{
	int i;

	i = -1;
	var[2]++;
	var[0] = 0;
	var[1] = 0;
	if (var[2] >= var[3])
	{
		ft_puttabstr(tab);
		while (tab[++i] != 0)
		{
			ft_memdel((void**)&tab[i]);
		}
		ft_memdel((void**)&tab);
		return (0);
	}
	return (1);
}

void		ft_notplace(t_tetri *tabtetri, char **tab, int *var, int j)
{
	int x;
	int y;

	x = 0;
	y = 1;
	var[x]++;
	if (tab[var[y]][var[x]] == '\0')
	{
		var[x] = 0;
		var[y]++;
		if (var[y] > j - 2)
		{
			ft_deltetri(tabtetri[var[2]], tab);
			var[2]--;
			if (var[2] < 0)
				var[2] = var[3] + 1;
			else
			{
				ft_search(tabtetri[var[2]], tab, &var[x], &var[y]);
				var[x]++;
				ft_deltetri(tabtetri[var[2]], tab);
			}
		}
	}
}

int			ft_resolve(t_tetri *tabtetri, int nbtetri, int j)
{
	int		*var;
	char	**tab;

	var = ft_memalloc(4);
	var[3] = nbtetri;
	while (1)
	{
		ft_init(&var[0], &var[1], &var[2]);
		tab = ft_squareinit(j++);
		while (var[2] < nbtetri)
		{
			if ((ft_checkput(tabtetri[var[2]], tab, var[0], var[1]) == 0))
				ft_notplace(tabtetri, tab, var, j);
			else
			{
				if (ft_place(tab, var) == 0)
				{
					ft_memdel((void**)&var);
					return (0);
				}
			}
		}
		free(tab);
	}
}
