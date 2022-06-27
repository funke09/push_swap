/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:17:57 by zcherrad          #+#    #+#             */
/*   Updated: 2022/06/26 16:34:50 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	one_arg(t_data *global, int y)
{
	int	i;
	int	*tab;
	int	j;

	j = 0;
	i = 1;
	y = global->len_max;
	tab = malloc(sizeof(int) * y);
	while (i < global->argc)
	{
		// printf("j= %d argv= %s\n", j, global->argv[i]);
		j += put_argv_in_tab(global->argv[i], tab, j);
		i++;
	}
	i = -1;
	while (++i < y)
		global->tab[0][i] = tab[i];
	free(tab);
	tab = NULL;
}

void	three_args(t_data *global, int y)
{
	int	x;

	x = 0;
	if (global->len_a == 3)
		global->max = check_max(global, x, y);// biggest number in tab[0]
	if (global->len_a == 2)
	{
		if (global->tab[0][0] > global->tab[0][1])
			(printf("sa\n"),sa(global));
	}
	if (global->tab[0][0] == global->max)
		(printf("ra\n"), ra(global));
	else if (global->tab[0][1] == global->max)
		(printf("rra\n"), rra(global));
	if (global->tab[0][0] > global->tab[0][1])
		(printf("sa\n"), sa(global));
}

void	for_args(t_data *global, int y, int x)
{
	int	max_b;
	int	i;
	int temp;

	x = 0;
	max_b = 0;
	i = 0;
	global->max = check_max(global, x, y);
	temp = global->max;
	while (i < global->len_a)
	{
		if (global->tab[0][0] == global->max)
			(printf("pb\n"), pb(global));
		else
			(printf("ra\n"), ra(global));
		i++;
	}
	three_args(global, y);
	if (global->tab[1][0] == temp)
		(printf("pa\n"), pa(global),
			printf("ra\n"), ra(global));
}

void	five_args(t_data *global, int y, int x)
{
	int	find_min_max;
	int temp;

	global->min = check_min(global, x, y);
	global->max = check_max(global, x, y);
	temp = global->max;
	while (++x <= global->len_a)
	{
		find_min_max = -1;
		while (++find_min_max <= global->len_a)
		{	
			if (global->tab[0][0] == global->min)
				(printf("pb\n"), pb(global));
			if (global->tab[0][0] == global->max)
				(printf("pb\n"), pb(global));
			else
				(printf("ra\n"), ra(global));
		}
	}
	three_args(global, y);
	manage_others_in_five_args(global, temp);
}

void	radix(t_data *global, int x)
{
	// int	i;
	int	len;
	int	bit;

	len = global->len_a;
	bit = 0;
	ft_firsttri(global);
	// i = check_after_bigger(global, len);
	while (check_after_bigger(global, len) == 1)
	{
		x = 0;
		while (x < len)
		{
			if ((global->tab_c[x] >> bit) & 1)
				(ra(global), printf("ra\n"));
			else
				(pb(global), printf("pb\n"));
			x++;
		}
		bit++;
		while (global->len_b > 0)
			(pa(global), printf("pa\n"));
		(free(global->tab_c), global->tab_c = NULL);
		ft_firsttri(global);
	}
}
