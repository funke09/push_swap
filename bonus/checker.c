/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 23:02:01 by zcherrad          #+#    #+#             */
/*   Updated: 2022/06/28 17:44:35 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	 debug(t_data *global)
{
	int i;

	ft_putstr_fd("dkhlt", 2);
	i = 0;
	while(i < global->len_a)
	{
		ft_putnbr_fd(global->tab[0][i], 1);
		i++;
	}
}

// void	check2(t_list **a, t_list **b, char *str)
// {
// 	if (!ft_strcmp("pa\n", str))
// 		pa(a, b, 0);
// 	else if (!ft_strcmp("rrr\n", str))
// 		rrr();
// 	else if (!ft_strcmp("ss\n", str))
// 		ss(a, b);
// 	else if (!ft_strcmp("rr\n", str))
// 		rr(a, b);
// 	else
// 		ft_putstr("Error\n");
//}
void	ft_exit(t_data *global, int i)
{
	ft_putstr_fd("Error\n", 2);
	if (i == 1)
	{
		free(global->tab[0]);
		free(global->tab[1]);
		free(global->tab);
	}
	exit(1);
}

void	check_stacks(t_data global)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		if (!ft_strcmp("rra\n", str))
			rra_bonus(&global);
		else if (!ft_strcmp("ra\n", str))
			ra_bonus(&global);
		else if (!ft_strcmp("sa\n", str))
			sa_bonus(&global);
		else if (!ft_strcmp("rrb\n", str))
			rrb_bonus(&global);
		else if (!ft_strcmp("rb\n", str))
			rb_bonus(&global);
		else if (!ft_strcmp("sb\n", str))
			sb_bonus(&global);
		else if (!ft_strcmp("pb\n", str))
			pb_bonus(&global);
		else if (!ft_strcmp("pa\n", str))
			pa_bonus(&global);
		else
			ft_putstr_fd("Error\n", 1);
		str = get_next_line(0);
	}
}

int	main(int ac, char **av)
{
	t_data	global;

	if (ac <= 2)
		return (1);
	full_stack(global,);
	check_stacks(global);
	debug(&global);
	if (ordre_checker_bonus(&global) && global.len_b == 0)
		ft_putstr_fd("OK", 1);
	else
		ft_putstr_fd("KO", 1);
	return (0);
}
