/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_allmemdel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdjeffal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/22 16:11:34 by sdjeffal          #+#    #+#             */
/*   Updated: 2016/01/22 17:00:38 by sdjeffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_allmemdel(t_tetri *tabtetri, char *str, char **tab)
{
	int i;

	i = -1;
	ft_memdel((void**)&tabtetri);
	while (tab[++i])
		ft_memdel((void**)&tab[i]);
	ft_memdel((void**)&tab);
	ft_memdel((void**)&str);
}
