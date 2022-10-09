/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:05:51 by gskrasti          #+#    #+#             */
/*   Updated: 2022/10/03 14:24:30 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_ss(t_stack **a_stack, t_stack **b_stack)
{
	ft_swap(a_stack);
	ft_swap(b_stack);
	ft_printf("ss\n");
	return (0);
}
