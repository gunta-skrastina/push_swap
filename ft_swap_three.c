/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:50:10 by gskrasti          #+#    #+#             */
/*   Updated: 2022/10/09 00:59:19 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_swap_three(t_stack **a_stack)
{	
	if ((*a_stack)->target_index > (*a_stack)->next->target_index
		&& (*a_stack)->target_index > (*a_stack)->next->next->target_index)
	{
		ft_ra(a_stack);
	}
	else if ((*a_stack)->next->target_index > (*a_stack)->target_index
		&& (*a_stack)->next->target_index
		> (*a_stack)->next->next->target_index)
	{
		ft_rra(a_stack);
	}
	if ((*a_stack)->target_index > (*a_stack)->next->target_index)
	{
		ft_sa(a_stack);
	}
	return (0);
}
