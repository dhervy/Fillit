/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbertojo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 19:27:17 by tbertojo          #+#    #+#             */
/*   Updated: 2016/01/22 00:39:53 by dhervy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_checkline(char *str, int i, int r, int t)
{
	int		h;

	h = 1;
	r = 19;
	i = -1;
	t = 1;
	while (str)
	{
		while (++i <= r)
		{
			if ((str[i] == '\n') && (str[i + 1] == '\0'))
				return (1);
			else if ((i == (t * 5) - h) && (str[i] != '\n'))
				return (0);
			else
				t++;
		}
		if ((str[i] == '\n') && (str[i + 1] == '.' || str[i + 1] == '#'))
			r = r + 21;
		else
			return (0);
		h--;
	}
	return (0);
}

int		ft_checkdiese(char *str, int i)
{
	if (str[i + 5] != '#' && str[i - 5] != '#' \
			&& str[i + 1] != '#' && str[i - 1] != '#')
		return (0);
	if ((str[i + 5] == '#' && str[i - 5] == '#') \
			|| (str[i + 1] == '#' && str[i - 1] == '#') || (str[i + 5] == \
				'#' && str[i + 1] == '#') || (str[i + 5] == '#' && str[i - \
					1] == '#') || (str[i - 5] == '#' && str[i - 1] == '#') || \
			(str[i - 5] == '#' && str[i + 1] == '#'))
		return (1);
	else
		return (2);
}

int		ft_checkcaract2(char *str, int i, int t, int j)
{
	if ((str[i] == '\n') && (str[i + 1] == '\0') && (t == 4 && j == 1))
		return (1);
	else if (str[i] != '.' && str[i] != '#' && str[i] != '\n')
		return (0);
	else
		return (3);
}

int		ft_checkcaract(char *str, int i, int r, int t)
{
	int		j;

	while (str)
	{
		t = 0;
		j = 0;
		while (++i <= r)
		{
			if (str[i] == '#')
			{
				if (ft_checkdiese(str, i) == 1)
					j = 1;
				else if (ft_checkdiese(str, i) == 0)
					return (0);
				t++;
			}
			if (ft_checkcaract2(str, i, t, j) != 3)
				return (ft_checkcaract2(str, i, t, j));
		}
		if (t != 4 || j != 1)
			return (0);
		if ((str[i] == '\n') && (str[i + 1] == '.' || str[i + 1] == '#'))
			r = r + 21;
	}
	return (0);
}

int		ft_checkall(char *str)
{
	int		i;
	int		r;
	int		t;

	t = 0;
	r = 19;
	i = -1;
	if (ft_checkline(str, i, r, t) == 0)
		return (0);
	if (ft_checkcaract(str, i, r, t) == 0)
		return (0);
	return (1);
}
