/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhervy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 22:15:05 by dhervy            #+#    #+#             */
/*   Updated: 2016/01/22 17:21:17 by sdjeffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_search(t_tetri tetri, char **tab, int *x, int *y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[j])
	{
		while (tab[j][i])
		{
			if (tab[j][i] == tetri.name)
			{
				*x = i;
				*y = j;
				return ;
			}
			i++;
		}
		i = 0;
		j++;
	}
}
