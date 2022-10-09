/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_assign_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:19:04 by gskrasti          #+#    #+#             */
/*   Updated: 2022/10/03 14:26:51 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_assign_current_index(t_stack *a_stack, int stack_size)
{
	int	i;

	i = 0;
	while (i < stack_size - 1)
	{
		a_stack->start_index = i;
		a_stack = a_stack->next;
		i++;
	}
	a_stack->start_index = i;
}

void	ft_assign_target_index(t_stack *a_stack, int stack_size)
{
	t_stack		*max;
	t_stack		*temp;
	int			i;

	i = stack_size;
	max = a_stack;
	while (i > 0)
	{
		temp = a_stack;
		while (temp)
		{
			if (temp->value >= max->value && temp->target_index == 0)
				max = temp;
			temp = temp->next;
		}
		max->target_index = i;
		temp = a_stack;
		while (temp->target_index != 0 && temp->next)
			temp = temp->next;
		max = temp;
		i--;
	}
}
