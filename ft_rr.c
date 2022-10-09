/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:14:35 by gskrasti          #+#    #+#             */
/*   Updated: 2022/10/02 01:41:06 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rr(t_stack **a_stack, t_stack **b_stack)
{
	ft_rotate(a_stack);
	ft_rotate(b_stack);
	ft_printf("rr\n");
	return (0);
}
