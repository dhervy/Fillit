/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitetri.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdjeffal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 17:13:59 by sdjeffal          #+#    #+#             */
/*   Updated: 2016/01/22 16:24:49 by sdjeffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_countetri(char **tab)
{
	int j;

	j = 0;
	while (tab[j] != '\0')
		j++;
	return (j);
}

char	**ft_splitetri(char *str)
{
	int		i;
	int		c;
	char	**tab;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			c++;
		if (c == 5)
		{
			str[i] = '*';
			c = 0;
		}
		i++;
	}
	tab = ft_strsplit(str, '*');
	return (tab);
}
