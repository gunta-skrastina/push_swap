/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:55:24 by gskrasti          #+#    #+#             */
/*   Updated: 2022/10/04 15:09:28 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_swap(t_stack **a_stack)
{
	t_stack	*temp;
	t_stack	*temp2;

	if (!(*a_stack) || !((*a_stack)->next))
		return (1);
	temp = *a_stack;
	if ((*a_stack)->next->next)
		temp2 = (*a_stack)->next->next;
	else
		temp2 = NULL;
	*a_stack = (*a_stack)->next;
	(*a_stack)->next = temp;
	(*a_stack)->next->next = temp2;
	return (0);
}

int	ft_push(t_stack **src, t_stack **dest)
{
	t_stack	*temp;
	t_stack	*temp2;

	if (!(*src))
		return (1);
	temp = (*src)->next;
	temp2 = *dest;
	*dest = *src;
	(*dest)->next = temp2;
	*src = temp;
	return (0);
}

int	ft_reverse_rotate(t_stack **a_stack)
{
	t_stack	*temp;
	t_stack	*temp2;

	if (!(*a_stack))
		return (1);
	temp = *a_stack;
	while (temp->next->next)
	{
		temp = temp->next;
	}
	temp2 = *a_stack;
	*a_stack = temp->next;
	(*a_stack)->next = temp2;
	temp->next = NULL;
	return (0);
}

int	ft_rotate(t_stack **a_stack)
{
	t_stack	*temp;
	t_stack	*temp2;

	if (!((*a_stack)->next))
		return (1);
	temp = (*a_stack);
	*a_stack = (*a_stack)->next;
	temp2 = ft_stack_end(*a_stack);
	temp2->next = temp;
	temp->next = NULL;
	return (0);
}
