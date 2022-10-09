/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:07:52 by gskrasti          #+#    #+#             */
/*   Updated: 2022/10/04 15:04:48 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_pa(t_stack **a_stack, t_stack **b_stack)
{
	if (!(*b_stack))
		return (1);
	ft_push(b_stack, a_stack);
	ft_printf("pa\n");
	return (0);
}
