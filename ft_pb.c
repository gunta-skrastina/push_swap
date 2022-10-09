/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:10:02 by gskrasti          #+#    #+#             */
/*   Updated: 2022/10/04 15:04:54 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_pb(t_stack **a_stack, t_stack **b_stack)
{
	if (!(*a_stack))
		return (1);
	ft_push(a_stack, b_stack);
	ft_printf("pb\n");
	return (0);
}
