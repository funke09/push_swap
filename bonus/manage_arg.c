/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_arg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcherrad <zcherrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:18:38 by zcherrad          #+#    #+#             */
/*   Updated: 2022/06/28 21:21:25 by zcherrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/checker.h"

void	check_argv(t_data *global, char *str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		if (str[j] == '-')
		{	
			if (!(str[j + 1] >= '0' && str[j + 1] <= '9'))
				ft_exit(global, 0);
		}
		else if (!(str[j] >= '0' && str[j] <= '9'))
			ft_exit(global, 0);
		j++;
	}
}

int	check_split(char *tab, t_data *global)
{
	char	**args;
	int		i;
	int		y;

	i = 0;
	args = ft_split(tab, ' ');
	if (!args)
		exit(1);
	while (args[i])
	{
		//ft_putstr_fd("dezt2\n", 1);
		check_argv(global, args[i]);
		i++;
	}
	// free char** fun
	y = 0;
	while (args[y])
		(free(args[y]), args[y] = NULL, y++);
	free(args);
	args = NULL;
	return (i);
}

void	check_len_argv(t_data *global)
{
	int	i;
	int	temp;
	int	tmp;

	i = 1;
	temp = 0;
	while (i < global->argc)
	{
		//ft_putstr_fd("dezt1\n", 2);
		tmp = check_split(global->argv[i], global);
		temp += tmp;
		i++;
	}
	global->len_max = temp;
	//ft_putstr_fd("fin", 2);
}
