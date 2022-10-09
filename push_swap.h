/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 14:28:10 by gskrasti          #+#    #+#             */
/*   Updated: 2022/10/09 13:02:20 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"

typedef struct s_stack
{
	int				value;
	int				start_index;
	int				target_index;
	int				cost_a;
	int				cost_b;
	int				target_pos;
	int				current_pos;
	struct s_stack	*next;
}		t_stack;

int		ft_check_for_dupe(t_stack *a_stack, int stack_size);
int		ft_check_if_sorted(t_stack *a_stack);
int		ft_atoi_new(const char *str);
int		ft_swap(t_stack **a_stack);
int		ft_sa(t_stack **a_stack);
int		ft_sb(t_stack **b_stack);
int		ft_ss(t_stack **a_stack, t_stack **b_stack);
int		ft_pa(t_stack **a_stack, t_stack **b_stack);
int		ft_pb(t_stack **a_stack, t_stack **b_stack);
int		ft_ra(t_stack **a_stack);
int		ft_rb(t_stack **b_stack);
int		ft_rr(t_stack **a_stack, t_stack **b_stack);
int		ft_rra(t_stack **a_stack);
int		ft_rrb(t_stack **b_stack);
int		ft_rrr(t_stack **a_stack, t_stack **b_stack);
int		ft_push(t_stack **a_stack, t_stack **b_stack);
int		ft_rotate(t_stack **a_stack);
int		ft_reverse_rotate(t_stack **a_stack);
int		ft_swap_two(t_stack **a_stack);
int		ft_swap_three(t_stack **a_stack);
t_stack	*ft_stack_end(t_stack *lst);
void	ft_lst_add_back(t_stack **lst, t_stack *new);
t_stack	*ft_new(int value);
void	ft_assign_current_index(t_stack *a_stack, int stack_size);
void	ft_assign_target_index(t_stack *a_stack, int stack_size);
t_stack	*ft_fill_stack(int argc, char *argv[]);
int		ft_big_sort(t_stack **a_stack, t_stack **b_stack, int stack_size);
int		ft_stack_size(t_stack *stack);
int		ft_calculate_cost(t_stack *a_stack, t_stack *b_stack);
int		loop(t_stack **a_stack, t_stack **b_stack, int stack_size);
int		ft_current_pos(t_stack *a_stack, t_stack *b_stack);
int		ft_target_pos(t_stack *a_stack, t_stack *b);
t_stack	*ft_get_max(t_stack *a_stack);
t_stack	*ft_get_min(t_stack *a_stack);
int		ft_do_cheapest_move(t_stack **a_stack, t_stack **b_stack);
int		ft_abs(int i);
int		ft_move(t_stack **a_stack, t_stack **b_stack, int cost_a, int cost_b);
int		ft_free_stack(t_stack **stack);

#endif