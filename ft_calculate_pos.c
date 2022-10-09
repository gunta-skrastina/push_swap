/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculate_pos.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:16:42 by gskrasti          #+#    #+#             */
/*   Updated: 2022/10/09 10:44:28 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	target_pos_cont(t_stack *temp_a, t_stack *b);

int	ft_current_pos(t_stack *a_stack, t_stack *b_stack)
{
	int	i;

	i = 0;
	while (b_stack->next)
	{
		b_stack->current_pos = i;
		i++;
		b_stack = b_stack->next;
	}
	b_stack->current_pos = i;
	i = 0;
	while (a_stack->next)
	{
		a_stack->current_pos = i;
		i++;
		a_stack = a_stack->next;
	}
	a_stack->current_pos = i;
	return (0);
}

int	ft_target_pos(t_stack *a_stack, t_stack *b)
{
	t_stack	*temp_a;
	t_stack	*max;
	t_stack	*min;

	max = ft_get_max(a_stack);
	min = ft_get_min(a_stack);
	temp_a = a_stack;
	while (b)
	{
		if (b->target_index > max->target_index)
			b->target_pos = max->current_pos + 1;
		else if (b->target_index < min->target_index)
			b->target_pos = min->current_pos;
		else if (b->target_index < temp_a->target_index
			&& b->target_index > ft_stack_end(a_stack)->target_index)
			b->target_pos = 0;
		else
		{
			target_pos_cont(temp_a, b);
		}
		temp_a = a_stack;
		b = b->next;
	}
	return (0);
}

static int	target_pos_cont(t_stack *temp_a, t_stack *b)
{
	while (temp_a)
	{
		if ((temp_a->next && temp_a->target_index < b->target_index
				&& temp_a->next->target_index > b->target_index)
			|| (!(temp_a->next) && temp_a->target_index < b->target_index
				&& temp_a->target_index > b->target_index))
			b->target_pos = temp_a->next->current_pos;
		temp_a = temp_a->next;
	}
	return (0);
}

t_stack	*ft_get_max(t_stack *a_stack)
{
	t_stack	*max;

	max = a_stack;
	while (a_stack)
	{
		if (a_stack->target_index > max->target_index)
			max = a_stack;
		a_stack = a_stack->next;
	}
	return (max);
}

t_stack	*ft_get_min(t_stack *a_stack)
{
	t_stack	*min;

	min = a_stack;
	while (a_stack)
	{
		if (a_stack->target_index < min->target_index)
			min = a_stack;
		a_stack = a_stack->next;
	}
	return (min);
}
