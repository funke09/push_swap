/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:32:19 by zcherrad          #+#    #+#             */
/*   Updated: 2022/06/26 16:26:05 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_similaire(t_data *global)
{	
	int	j;
	int	i;

	j = 0;
	while (j < global->len_max)
	{
		i = 0;
		while (i < j)
		{
			if (global->tab[0][i] == global->tab[0][j])
				ft_exit(global, 1);
			i++;
		}
		j++;
	}
}

// je verifie si les valeurs sont en désordre
int	ordre_checker(t_data *global)
{
	int	x;
	int	compt;

	x = 0;
	compt = 0;
	while (x < global->len_a - 1)
	{
		if (global->tab[0][x] > global->tab[0][x + 1])
			return (1);
		x++;
	}
	return (0);
}

void	ft_firsttri(t_data *global)
{
	long int	nb;
	int			i;
	int			j;
	int			s;

	nb = MIN_INT;
	i = 0;
	global->tab_c = calloc(sizeof(int), global->len_a + 1);
	while (i != global->len_a)
	{
		s = 0;
		j = 0;
		while (j != global->len_a)
		{
			if (global->tab[0][s] == nb)
				s++;
			if (global->tab[0][s] > global->tab[0][j] && global->tab[0][j] > nb)
				s = j;
			j++;
		}
		nb = global->tab[0][s];
		global->tab_c[s] = i;
		i++;
	}
}

void	check_fct(t_data *global)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < 2)
	{
		if (y == 0)
		{
			x = 0;
			while (x < global->len_a)
				(printf("A =	%d\n", global->tab[0][x]), x++);
			printf("\n");
		}
		if (y == 1)
		{
			x = 0;
			while (x < global->len_b)
				(printf("B =	%d\n", global->tab[1][x]), x++);
			printf("\n");
		}
		y++;
	}
}