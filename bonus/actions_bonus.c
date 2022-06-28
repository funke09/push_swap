#include "../include/push_swap.h"


void	sa_bonus(t_data *global)
{
	int	temp;

	if (!(global->tab[0]))
		ft_exit(global, 1);
	temp = global->tab[0][0];
	global->tab[0][0] = global->tab[0][1];
	global->tab[0][1] = temp;
}

void	sb_bonus(t_data *global)
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

void	pa_bonus(t_data *global)
{
	if (!(global->tab[0]))
		ft_exit(global, 1);
	global->len_a++;
	pa_rra_bonus(global);
	global->tab[0][0] = global->tab[1][0];
	pa_rb_bonus(global);
	global->len_b--;
}

void	pb_bonus(t_data *global)
{
	if (!(global->tab[0]))
		ft_exit(global, 1);
	global->len_b++;
	pb_rrb_bonus(global);
	global->tab[1][0] = global->tab[0][0];
    pb_ra_bonus(global);
	global->len_a--;
}
