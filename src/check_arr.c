/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:33:35 by zcherrad          #+#    #+#             */
/*   Updated: 2022/06/26 16:30:12 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/push_swap.h"

int	check_len_a(t_data *global, int x, int y)
{	
	y = 0;
	while (y == 0)
	{
		x = 0;
		while (x < global->len_max)
			x++;
		y++;
	}
	return (x);
}

int	check_min(t_data *global, int x, int y)
{
	int	temp;

	temp = MAX_INT;
	while (y < 2)
	{
		x = 0;
		while (x < global->len_a && y == 0)
		{
			if (temp > global->tab[y][x])
				temp = global->tab[y][x];
			x++;
		}
		y++;
	}
	return (temp);
}

int	check_max(t_data *global, int x, int y)
{
	int	temp;

	temp = MIN_INT;
	x = 0;
	while (x < global->len_a && y == 0)
	{
		if (temp < global->tab[y][x])
			temp = global->tab[y][x];
		x++;
	}
	return (temp);
}

int	check_min_max_b(t_data *global, int x)
{
	int	max;
	int	min;

	min = 0;
	max = 0;
	x = 0;
	while (x < global->len_a)
	{
		if (global->tab[1][0] == global->max ||
			global->tab[1][1] == global->max)
			max++;
		if (global->tab[1][0] == global->min ||
			global->tab[1][1] == global->min)
			min++;
		x++;
	}
	if (max == 1 && min == 1)
		return (1);
	else
		return (0);
	return (0);
}

int	check_after_bigger(t_data *global, int len)
{
	int	i;

	i = 0;
	while (i < len - 1)
	{
		if (global->tab[0][i] > global->tab[0][i + 1])
			return (1);
		i++;
	}
	return (0);
}
