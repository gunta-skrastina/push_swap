/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:02:32 by gskrasti          #+#    #+#             */
/*   Updated: 2022/10/03 04:39:23 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sb(t_stack **b_stack)
{
	if (!(*b_stack))
		return (1);
	ft_swap(b_stack);
	ft_printf("sb\n");
	return (0);
}
