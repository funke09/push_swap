/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:56:02 by zcherrad          #+#    #+#             */
/*   Updated: 2022/06/27 15:10:26 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"


void	sa(t_data *global)
{
	int	temp;

	if (!(global->tab[0]))
		ft_exit(global, 1);
	temp = global->tab[0][0];
	global->tab[0][0] = global->tab[0][1];
	global->tab[0][1] = temp;
}

void	sb(t_data *global)
{
	int	temp;

	if (!(global->tab[0]))
		ft_exit(global, 1);
	temp = global->tab[1][0];
	global->tab[1][0] = global->tab[1][1];
	global->tab[1][1] = temp;
}

// void	ss(t_data *global)
// {
// 	int	x;
// 	int	y;
// 	int	temp;

// 	x = 0;
// 	y = 0;
// 	if (!(global->tab[0]))
// 		ft_exit(global, 1);
// 	while (y < 2)
// 	{
// 		x = 0;
// 		while (x < global->len_max)
// 		{
// 			if (x == 1)
// 			{
// 				temp = global->tab[y][0];
// 				global->tab[y][0] = global->tab[y][1];
// 				global->tab[y][1] = temp;
// 			}
// 			x++;
// 		}
// 		y++;
// 	}
// }

void	pa(t_data *global)
{
	if (!(global->tab[0]))
		ft_exit(global, 1);
	global->len_a++;
	pa_rra(global);
	global->tab[0][0] = global->tab[1][0];
	pa_rb(global);
	global->len_b--;
}

void	pb(t_data *global)
{
	if (!(global->tab[0]))
		ft_exit(global, 1);
	global->len_b++;
	pb_rrb(global);
	global->tab[1][0] = global->tab[0][0];
    pb_ra(global);
	global->len_a--;
}
