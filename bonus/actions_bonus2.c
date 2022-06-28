#include "../include/push_swap.h"

void	pb_ra_bonus(t_data *global)
{
	int	x;
	int	temp;

	x = 0;
	temp = 0;
	while (x <= global->len_a - 1)
	{
		if (x == 0)
		{
			temp = global->tab[0][0];
			global->tab[0][0] = global->tab[0][1];
		}
		else if (x == global->len_a - 1)
			global->tab[0][x] = temp;
		else
			global->tab[0][x] = global->tab[0][x + 1];
		x++;
	}
}

void	pa_rra_bonus(t_data *global)
{
	int	x;
	int	temp;

	x = global->len_a - 1;
	temp = 0;
	while (x >= 0)
	{
		if (x == global->len_a)
			temp = global->tab[0][x];
		else if (x == 0)
			global->tab[0][0] = temp;
		else
			global->tab[0][x] = global->tab[0][x - 1];
		x--;
	}
}

void	pa_rb_bonus(t_data *global)
{
	int	x;
	int	temp;

	x = 0;
	while (x <= global->len_b)
	{
		if (x == 0)
		{
			temp = global->tab[1][0];
			global->tab[1][0] = global->tab[1][1];
			x++;
		}
		if (x == global->len_b)
			global->tab[1][x] = temp;
		else
			global->tab[1][x] = global->tab[1][x + 1];
		x++;
	}
}

void	pb_rrb_bonus(t_data *global)
{
	int	x;
	int	temp;

	x = global->len_b - 1;
	temp = 0;
	while (x >= 0)
	{
		if (x == global->len_b)
			temp = global->tab[1][x];
		else if (x == 0)
			global->tab[1][0] = temp;
		else
			global->tab[1][x] = global->tab[1][x - 1];
		x--;
	}
}

