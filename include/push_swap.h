/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macos <macos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:53:38 by zcherrad          #+#    #+#             */
/*   Updated: 2022/06/28 03:29:50 by macos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

# include "../libft/libft.h"

# define MAX_INT 2147483647
# define MIN_INT -2147483648


typedef struct s_data
{
	int		**tab;
	int		*tab_c;
	char	**argv;
	int		argc; // argc -1 == t
	int		len_max;
	int		len_a;
	int		len_b;
	int		min;
	int		max;
}				t_data;

/*check_fcts_argv.c*/
void	check_len_argv(t_data *global);
int		check_split(char *tab, t_data *global);
void	check_argv(t_data *global, char *argv);
int		put_argv_in_tab(char *global, int *tab, int j);
/*check_fcts_tab.c*/
void	check_similaire(t_data *global);
int		ordre_checker(t_data *global);
void	check_fct(t_data *global);
void	ft_firsttri(t_data *global);
/*push_swap_algo.c*/
void	one_arg(t_data *global, int y);
void	three_args(t_data *global, int y);
void	for_args(t_data *global, int y, int x);
void	five_args(t_data *global, int y, int x);
void	radix(t_data *global, int x);
/*check_valeurs.c*/
int		check_len_a(t_data *global, int x, int y);
int		check_after_bigger(t_data *global, int len);
int		check_min(t_data *global, int x, int y);
int		check_max(t_data *global, int x, int y);
int		check_min_max_b(t_data *global, int x);
/*manage_tab.c*/
void	manage_info_tab(t_data *global);
void	manage_len_tab(t_data *global);
void	manage_others_in_five_args(t_data *global, int temp);
void	check_tab(char **argv, t_data *global, int i);
/*manage_cmd.c*/
void	sa(t_data *global);
void	sb(t_data *global);
void	ss(t_data *global);
void	pa(t_data *global);
void	pb(t_data *global);
/*manage_cmd_in_r.c*/
void	ra(t_data *global);
void	rb(t_data *global);
void	rr(t_data *global);
void	rra(t_data *global);
void	rrb(t_data *global);
/*pa_pb_fcts.c*/
void	pa_rra(t_data *global);
void	pa_rb(t_data *global);
void	pb_rrb(t_data *global);
void	pb_ra(t_data *global);
// ---------------------------
void	sa_bonus(t_data *global);
void	sb_bonus(t_data *global);
void	ss_bonus(t_data *global);
void	pa_bonus(t_data *global);
void	pb_bonus(t_data *global);
void	ra_bonus(t_data *global);
void	rb_bonus(t_data *global);
void	rr_bonus(t_data *global);
void	rra_bonus(t_data *global);
void	rrb_bonus(t_data *global);
void	pa_rra_bonus(t_data *global);
void	pa_rb_bonus(t_data *global);
void	pb_rrb_bonus(t_data *global);
void	pb_ra_bonus(t_data *global);
int		ordre_checker_bonus(t_data *global);
/*push_swap.c*/
void	ft_exit(t_data *global, int i);
void	manage_algo(t_data *global);

#endif