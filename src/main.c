/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhervy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 18:29:41 by dhervy            #+#    #+#             */
/*   Updated: 2016/01/22 18:00:15 by sdjeffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdlib.h>

int		main(int argc, char **argv)
{
	char	*str;
	char	**tab;
	int		j;
	int		nbtetri;
	t_tetri	*tabtetri;

	if (argc != 2 || !(str = ft_read(argv[1])))
	{
		ft_putendl("error");
		return (0);
	}
	if (ft_checkall(str) == 1)
	{
		tab = ft_splitetri(str);
		nbtetri = ft_countetri(tab);
		tabtetri = (t_tetri*)malloc(sizeof(t_tetri) * nbtetri);
		ft_tabtotetri(tabtetri, tab);
		j = ft_squaremin(nbtetri);
		ft_resolve(tabtetri, nbtetri, j);
		ft_allmemdel(tabtetri, str, tab);
	}
	else
		ft_putendl("error");
	return (0);
}
