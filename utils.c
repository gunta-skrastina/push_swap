/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gskrasti <gskrasti@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:19:51 by gskrasti          #+#    #+#             */
/*   Updated: 2022/10/09 13:00:02 by gskrasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lst_add_back(t_stack **lst, t_stack *new)
{
	t_stack	*current;

	if (*lst)
	{
		current = *lst;
		current = ft_stack_end(current);
		current->next = new;
	}
	else
		*lst = new;
}

t_stack	*ft_stack_end(t_stack *lst)
{
	t_stack	*current;

	current = lst;
	if (!current)
		return (NULL);
	if (!(current->next))
		return (current);
	while (current->next)
		current = current->next;
	return (current);
}

t_stack	*ft_new(int value)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	new->value = value;
	new->next = NULL;
	return (new);
}

t_stack	*ft_fill_stack(int argc, char *argv[])
{
	t_stack	*a_stack;
	int		i;

	a_stack = NULL;
	i = 1;
	while (i < argc)
	{
		ft_lst_add_back(&a_stack, ft_new(ft_atoi_new(argv[i])));
		i++;
	}
	ft_assign_current_index(a_stack, argc - 1);
	if (ft_check_for_dupe(a_stack, argc - 1) != 0)
	{
		ft_printf("ERROR Duplicate numbers\n");
		exit (0);
	}
	if (ft_check_if_sorted(a_stack) == 0)
	{
		exit (0);
	}
	ft_assign_target_index(a_stack, argc - 1);
	return (a_stack);
}

int	ft_stack_size(t_stack *stack)
{
	t_stack	*current;
	int		count;

	current = stack;
	count = 0;
	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);
}
