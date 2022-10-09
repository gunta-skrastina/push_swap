/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:18:55 by gskrasti          #+#    #+#             */
/*   Updated: 2022/10/04 15:50:12 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rrb(t_stack **b_stack)
{
	if (!(*b_stack) || !((*b_stack)->next))
		return (1);
	ft_reverse_rotate(b_stack);
	ft_printf("rrb\n");
	return (0);
}
