#include "../include/push_swap.h"

int	put_argv_in_tab_bns(char *global, int *tab, int j)
{
	char	**tab_tmp;
	int		tmp;
	int		i;

	tab_tmp = ft_split(global, ' ');
	if (!tab_tmp)
		exit(1);
	i = 0;
	while (tab_tmp[i] != NULL)
	{
		tmp = ft_atoi(tab_tmp[i]);
		tab[j] = tmp;
		j++;
		i++;
	}
	i = 0;
	// void ft_free_arr
	while (tab_tmp[i])
		(free(tab_tmp[i]), tab_tmp[i] = NULL, i++);
	free(tab_tmp);
	tab_tmp = NULL;
	printf("i = %d\n", i);
	return (i);
}

void	full_stack(t_data *global, int y)
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
		j += put_argv_in_tab_bns(global->argv[i], tab, j);
		i++;
	}
	i = -1;
	while (++i < y)
		global->tab[0][i] = tab[i];
	free(tab);
	tab = NULL;
}

int	ordre_checker_bonus(t_data *global)
{
	int	x;
	int	compt;

	x = 0;
	compt = 0;
	while (x < global->len_a - 1)
	{
		if (global->tab[0][x] > global->tab[0][x + 1])
			return (1);
		x++;
	}
	return (0);
}