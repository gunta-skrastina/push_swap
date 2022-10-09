/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_big_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:08:17 by gskrasti          #+#    #+#             */
/*   Updated: 2022/10/09 01:02:12 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_big_sort(t_stack **a_stack, t_stack **b_stack, int stack_size)
{
	loop(a_stack, b_stack, stack_size);
	ft_swap_three(a_stack);
	while (ft_stack_size(*a_stack) < stack_size)
	{
		ft_current_pos(*a_stack, *b_stack);
		ft_target_pos(*a_stack, *b_stack);
		ft_calculate_cost(*a_stack, *b_stack);
		ft_do_cheapest_move(a_stack, b_stack);
		ft_pa(a_stack, b_stack);
	}
	return (0);
}

int	loop(t_stack **a_stack, t_stack **b_stack, int stack_size)
{
	int	pushed;
	int	i;

	pushed = 0;
	i = 0;
	while (stack_size > 6 && i < stack_size && pushed < stack_size / 2)
	{
		if ((*a_stack)->target_index <= stack_size / 2)
		{
			ft_pb(a_stack, b_stack);
			pushed++;
		}
		else
			ft_ra(a_stack);
		i++;
	}
	while (stack_size - pushed > 3)
	{
		ft_pb(a_stack, b_stack);
		pushed++;
	}
	return (0);
}

int	ft_calculate_cost(t_stack *a_stack, t_stack *b_stack)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b;
	int		size_a;
	int		size_b;

	tmp_a = a_stack;
	tmp_b = b_stack;
	size_a = ft_stack_size(tmp_a);
	size_b = ft_stack_size(tmp_b);
	while (tmp_b)
	{
		tmp_b->cost_b = tmp_b->current_pos;
		if (tmp_b->current_pos > size_b / 2)
			tmp_b->cost_b = (size_b - tmp_b->current_pos) * (-1);
		tmp_b->cost_a = tmp_b->target_pos;
		if (tmp_b->target_pos > size_a / 2)
			tmp_b->cost_a = (size_a - tmp_b->target_pos) * (-1);
		tmp_b = tmp_b->next;
	}
	return (0);
}
