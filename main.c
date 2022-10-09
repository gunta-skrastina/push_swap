/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:21:47 by gskrasti          #+#    #+#             */
/*   Updated: 2022/10/09 10:39:05 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_final_sort(t_stack **a_stack);

int	main(int argc, char *argv[])
{
	t_stack		*a_stack;
	t_stack		*b_stack;

	b_stack = NULL;
	if (argc == 1 || (argc == 2 && (ft_atoi_new(argv[1])
				|| (ft_atoi_new(argv[1]) == 0))))
		return (0);
	a_stack = ft_fill_stack(argc, argv);
	if (argc == 3)
	{
		ft_swap_two(&a_stack);
		ft_free_stack(&a_stack);
		return (0);
	}
	if (argc == 4)
	{
		ft_swap_three(&a_stack);
		ft_free_stack(&a_stack);
		return (0);
	}
	ft_big_sort(&a_stack, &b_stack, argc - 1);
	if (ft_check_if_sorted(a_stack) == 1)
		ft_final_sort(&a_stack);
	ft_free_stack(&a_stack);
	return (0);
}

static int	ft_final_sort(t_stack **a_stack)
{
	t_stack	*temp;
	int		stack_size;
	int		count;

	stack_size = ft_stack_size(*a_stack);
	temp = *a_stack;
	count = 0;
	while (temp->target_index != 1)
	{
		temp = temp->next;
		count++;
	}
	if (count < stack_size - count)
	{
		while ((*a_stack)->target_index != 1)
			ft_ra(a_stack);
	}
	else
	{
		while ((*a_stack)->target_index != 1)
			ft_rra(a_stack);
	}
	return (0);
}
