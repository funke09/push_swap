/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:58:37 by zcherrad          #+#    #+#             */
/*   Updated: 2022/06/18 15:53:44 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


void	ra(t_data *global)
{
	int	x;
	int	y;
	int	temp;

	temp = 0;
	x = 0;
	y = 0;
	if (!(global->tab[0]))
		ft_exit(global, 1);
	while (x < global->len_a)
	{
		if (x == 0)
		{
			temp = global->tab[0][0];
			global->tab[0][0] = global->tab[0][1];
			x++;
		}
		if (x == global->len_a - 1)
			global->tab[0][x] = temp;
		else
			global->tab[0][x] = global->tab[0][x + 1];
		x++;
	}
}

void	rb(t_data *global)
{
	int	x;
	int	temp;

	x = 0;
	if (!(global->tab[0]))
		ft_exit(global, 1);
	while (x < global->argc - 1)
	{
		if (x == 0)
		{
			temp = global->tab[1][0];
			global->tab[1][0] = global->tab[1][1];
		}
		if (x > 0)
			global->tab[1][x] = global->tab[1][x + 1];
		if (x == global->argc - 2)
			global->tab[1][x] = temp;
		x++;
	}
}

void	rr(t_data *global)
{
	int	x;
	int	y;
	int	temp;

	x = 0;
	y = -1;
	if (!(global->tab[0]))
		ft_exit(global, 1);
	while (++y < 2)
	{
		x = -1;
		while (++x < global->argc - 1)
		{
			if (x == 0)
			{
				temp = global->tab[y][0];
				global->tab[y][0] = global->tab[y][1];
			}
			if (x > 0)
				global->tab[y][x] = global->tab[y][x + 1];
			if (x == global->argc - 2)
				global->tab[y][x] = temp;
		}
	}
}

void	rra(t_data *global)
{
	int	x;
	int	temp;

	x = global->len_a - 1;
	temp = 0;
	if (!(global->tab[0]))
		ft_exit(global, 1);
	while (x >= 0)
	{
		if (x == global->len_a - 1)
		{
			temp = global->tab[0][x];
			global->tab[0][x] = global->tab[0][x - 1];
		}
		else if (x == 0)
			global->tab[0][x] = temp;
		else
			global->tab[0][x] = global->tab[0][x - 1];

		x--;
	}
}

void	rrb(t_data *global)
{
	int	x;
	int	temp;

	x = 0;
	if (!(global->tab[0]))
		ft_exit(global, 1);
	while (x < global->len_b)
	{
		if (x == global->len_b - 1)
			temp = global->tab[1][x];
		x++;
	}
	while (x >= 0)
	{
		if (x > 0)
			global->tab[1][x] = global->tab[1][x - 1];
		if (x == 0)
			global->tab[1][x] = temp;
		x--;
	}
}
