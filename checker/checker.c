
#include "../include/push_swap.h"

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

void	check_stacks(t_data global)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		if (!ft_strcmp("rra\n", str))
			rra(&global);
		else if (!ft_strcmp("ra\n", str))
			ra(&global);
		else if (!ft_strcmp("sa\n", str))
			sa(&global);
		else if (!ft_strcmp("rrb\n", str))
			rrb(&global);
		else if (!ft_strcmp("rb\n", str))
			rb(&global);
		else if (!ft_strcmp("sb\n", str))
			sb(&global);
		else if (!ft_strcmp("pb\n", str))
			pb(&global);
		else if (!ft_strcmp("pa\n", str))
 		    pa(&global);
        else
            ft_putstr_fd("Error\n",1);
		str = get_next_line(0);
	}
}

int main (int ac , char **av)
{
    t_data global;


    if (ac <= 2)
        return (0);
    check_stacks(global);
    if (ordre_checker(&global) && global.len_b == 0)
        ft_putstr_fd("OK", 1);
    else
        ft_putstr_fd("KO", 1);

}