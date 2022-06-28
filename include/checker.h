/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:04:16 by zcherrad          #+#    #+#             */
/*   Updated: 2022/06/28 21:23:39 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

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
void	full_stack(t_data *global, int y);
void	ft_exit(t_data *global, int i);
void	check_argv(t_data *global, char *str);
int		check_split(char *tab, t_data *global);
void	check_len_argv(t_data *global);

#endif