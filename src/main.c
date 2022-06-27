/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 15:43:30 by zcherrad          #+#    #+#             */
/*   Updated: 2022/06/26 15:24:26 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "../include/push_swap.h"

void	ft_exit(t_data *global, int i)
{
	// ft_putstr_fd("Error\n", 2);
	// if (i == 1)
	// {
	// 	free(global->tab[0]);
	// 	free(global->tab[1]);
	// 	free(global->tab);
	// }
	// exit(1);
}

void	manage_algo(t_data *global)
{
	int	x;
	int	y;
	int	ordre;

	x = 0;
	y = 0;
	if (global->len_max <= 1)
		exit(0);
	global->len_a = check_len_a(global, x, y); // len stack a  x = n(args)
	global->len_b = 0;
	manage_info_tab(global);
	one_arg(global, y);
	check_similaire(global); // need to change
	ordre = ordre_checker(global);
	if (ordre == 0)
		exit(1);
	if (global->len_max < 4)// cases: two args & three args
		three_args(global, y);
	if (global->len_max == 4)
		for_args(global, y, x);
	else if (global->len_max == 5)
		five_args(global, y, x - 1);
	else
		radix(global, x);
}

int	main(int argc, char **argv)
{
	t_data	global;

	global.argc = argc;
	global.argv = argv;
	if (global.argc < 1)
		ft_exit(&global, 0);
	check_len_argv(&global); // 
	manage_algo(&global); // algo
	return (0);
}