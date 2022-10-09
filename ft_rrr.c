/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:19:37 by gskrasti          #+#    #+#             */
/*   Updated: 2022/10/03 14:01:34 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rrr(t_stack **a_stack, t_stack **b_stack)
{
	ft_reverse_rotate(a_stack);
	ft_reverse_rotate(b_stack);
	ft_printf("rrr\n");
	return (0);
}
