/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:19:51 by gskrasti          #+#    #+#             */
/*   Updated: 2022/10/09 13:03:02 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_abs(int i)
{
	if (i < 0)
		i = i * (-1);
	return (i);
}

int	ft_free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack || !(*stack))
		return (1);
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
	return (0);
}
