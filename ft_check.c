/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:43:20 by gskrasti          #+#    #+#             */
/*   Updated: 2022/10/08 18:15:50 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_for_dupe(t_stack *a_stack, int stack_size)
{
	t_stack	*check;
	int		i;
	int		j;

	check = a_stack;
	i = 0;
	while (i < stack_size)
	{
		j = i;
		while (j < stack_size)
		{
			if (a_stack->start_index != check->start_index
				&& a_stack->value == check->value)
			{
				return (1);
			}
			if (check->next)
				check = check->next;
			j++;
		}
		if (a_stack->next)
			a_stack = a_stack->next;
		i++;
	}
	return (0);
}

int	ft_check_if_sorted(t_stack *a_stack)
{
	if (!a_stack->next)
		return (2);
	while (a_stack->next)
	{
		if (a_stack->value > a_stack->next->value)
		{
			return (1);
		}
		a_stack = a_stack->next;
	}
	return (0);
}

int	ft_check_if_reverse_sorted(t_stack *a_stack)
{
	if (!a_stack->next)
		return (2);
	while (a_stack->next)
	{
		if (a_stack->value < a_stack->next->value)
		{
			return (1);
		}
		a_stack = a_stack->next;
	}
	return (0);
}
