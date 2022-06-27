/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_tab1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 17:19:22 by zcherrad          #+#    #+#             */
/*   Updated: 2022/06/26 14:42:24 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	manage_others_in_five_args(t_data *global, int temp)
{
	if (global->tab[1][0] == temp && global->tab[1][1] == global->min)
		(printf("pa\n"), pa(global), printf("ra\n"),
			ra(global), printf("pa\n"), pa(global));
	else if (global->tab[1][0] == global->min &&
		global->tab[1][1] == temp)
		(printf("sb\n"), sb(global), printf("pa\n"),
			pa(global), printf("ra\n"), ra(global),
			printf("pa\n"), pa(global));
}

void	manage_len_tab(t_data *global)
{
	global->tab = ft_calloc(2, sizeof(int *));
	if (!global->tab)
		exit(1) ;
	global->tab[0] = ft_calloc(global->len_max, sizeof(int));
	global->tab[1] = ft_calloc(global->len_max, sizeof(int));
	//printf("len_max=%d | argc - 1 = %d\n", global->len_max, (global->argc - 1));
	if (!global->tab[0] || !global->tab[1])
		exit(1) ;
}

void	manage_info_tab(t_data *global)
{	
	int	y;

	y = 0;
	manage_len_tab(global);
	// while (y < 2)
	// {
	// 	x = 0;
	// 	while (x < global->argc - 1)
	// 		x++;
	// 	y++;
	// }
}
