/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filit.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhervy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 18:40:41 by dhervy            #+#    #+#             */
/*   Updated: 2016/01/22 18:55:05 by sdjeffal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"

typedef struct	s_point
{
	int x;
	int y;
}				t_point;

typedef struct	s_tetriminos
{
	t_point		p[4];
	char		name;
}				t_tetri;

char			*ft_read(char *argc);
int				ft_check(char *str);
int				ft_checkpiece(char *str, int i);
char			*ft_alpha(char *str);
char			**ft_splitetri(char *str);
int				ft_countetri(char **tab);
int				ft_squaremin(int nbp);
char			**ft_squareinit(size_t length);
void			ft_tabtotetri(t_tetri *tabtetri, char **strtetri);
void			ft_tetrinit(t_tetri *tetri, int c);
void			ft_tetrisetpoint(t_tetri *tetri, int x, int y, size_t index);
void			ft_puttetri(t_tetri const *tetri);
void			ft_puttabtetri(t_tetri *tetri, size_t size);
int				ft_checkput(t_tetri tetri, char **tab, int ln, int cn);
void			ft_deltetri(t_tetri tetri, char **tab);
void			ft_search(t_tetri tetri, char **tab, int *x, int *y);
int				ft_checkall(char *str);
int				ft_resolve(t_tetri *tabtetri, int nbtetri, int j);
void			ft_allmemdel(t_tetri *tabtetri, char *str, char **tab);

#endif
