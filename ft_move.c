/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:08:17 by gskrasti          #+#    #+#             */
/*   Updated: 2022/10/09 13:04:47 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	ft_cost_a(t_stack **a_stack, int cost_a);
static	int	ft_cost_b(t_stack **b_stack, int cost_b);

int	ft_do_cheapest_move(t_stack **a_stack, t_stack **b_stack)
{
	t_stack	*temp;
	t_stack	*cheapest;
	int		min;

	min = ft_abs((*b_stack)->cost_a) + ft_abs((*b_stack)->cost_b);
	cheapest = (*b_stack);
	temp = (*b_stack)->next;
	while (temp)
	{
		if (((ft_abs((temp->cost_a) + ft_abs(temp->cost_b)) < min)))
		{
			cheapest = temp;
			min = ft_abs(temp->cost_a) + ft_abs(temp->cost_b);
		}
		temp = temp->next;
	}
	temp = (*b_stack)->next;
	while (temp)
	{
		if (temp->cost_a > 0 && temp->cost_b > 0)
		{
			if (temp->cost_a - temp->cost_b >= 0 && temp->cost_a < min)
			{
				cheapest = temp;
				min = temp->cost_a;
			}
			else if (temp->cost_b - temp->cost_a >= 0 && temp->cost_b < min)
			{
				cheapest = temp;
				min = temp->cost_b;
			}
		}
		temp = temp->next;
	}
	temp = (*b_stack)->next;
	while (temp)
	{
		if (temp->cost_a < 0 && temp->cost_b < 0)
		{
			if (ft_abs(temp->cost_a) - ft_abs(temp->cost_b) >= 0 && ft_abs(temp->cost_a) < min)
			{
				cheapest = temp;
				min = ft_abs(temp->cost_a);
			}
			else if (ft_abs(temp->cost_b) - ft_abs(temp->cost_a) >= 0 && ft_abs(temp->cost_b) < min)
			{
				cheapest = temp;
				min = ft_abs(temp->cost_b);
			}
		}
		temp = temp->next;
	}
	ft_move(a_stack, b_stack, cheapest->cost_a, cheapest->cost_b);
	return (0);
}

int	ft_move(t_stack **a_stack, t_stack **b_stack, int cost_a, int cost_b)
{
	while (cost_a > 0 && cost_b > 0)
	{
		ft_rr(a_stack, b_stack);
		cost_a--;
		cost_b--;
	}
	while (cost_a < 0 && cost_b < 0)
	{
		ft_rrr(a_stack, b_stack);
		cost_a++;
		cost_b++;
	}
	ft_cost_a(a_stack, cost_a);
	ft_cost_b(b_stack, cost_b);
	return (0);
}

static	int	ft_cost_a(t_stack **a_stack, int cost_a)
{
	while (cost_a != 0)
	{
		if (cost_a > 0)
		{
			ft_ra(a_stack);
			cost_a--;
		}
		else if (cost_a < 0)
		{
			ft_rra(a_stack);
			cost_a++;
		}
	}
	return (0);
}

static	int	ft_cost_b(t_stack **b_stack, int cost_b)
{
	while (cost_b != 0)
	{
		if (cost_b > 0)
		{
			ft_rb(b_stack);
			cost_b--;
		}
		else if (cost_b < 0)
		{
			ft_rrb(b_stack);
			cost_b++;
		}
	}
	return (0);
}
