/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:52:42 by labdelkh          #+#    #+#             */
/*   Updated: 2025/01/21 10:52:45 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_stack **stack_a)
{
	if (ft_min(*stack_a) == (*stack_a)->num)
	{
		sa(stack_a, 0);
		ra(stack_a, 0);
	}
	else if (ft_max(*stack_a) == (*stack_a)->num)
	{
		ra(stack_a, 0);
		if (!ft_check_sorted(*stack_a))
			sa(stack_a, 0);
	}
	else
	{
		if (ft_find_index(*stack_a, ft_max(*stack_a)) == 1)
			rra(stack_a, 0);
		else
			sa(stack_a, 0);
	}
}

void	ft_sort_b_till_3(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*tmp;

	while (ft_lstsize(*stack_a) > 3 && !ft_check_sorted(*stack_a))
	{
		tmp = *stack_a;
		i = ft_rotate_type_ab(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb(*stack_a, *stack_b, tmp->num))
				i = ft_apply_rarb(stack_a, stack_b, tmp->num, 'a');
			else if (i == ft_case_rrarrb(*stack_a, *stack_b, tmp->num))
				i = ft_apply_rrarrb(stack_a, stack_b, tmp->num, 'a');
			else if (i == ft_case_rarrb(*stack_a, *stack_b, tmp->num))
				i = ft_apply_rarrb(stack_a, stack_b, tmp->num, 'a');
			else if (i == ft_case_rrarb(*stack_a, *stack_b, tmp->num))
				i = ft_apply_rrarb(stack_a, stack_b, tmp->num, 'a');
			else
				tmp = tmp->next;
		}
	}
}

t_stack	*ft_sort_b(t_stack **stack_a)
{
	t_stack	*stack_b;

	stack_b = NULL;
	if (ft_lstsize(*stack_a) > 3 && !ft_check_sorted(*stack_a))
		pb(stack_a, &stack_b, 0);
	if (ft_lstsize(*stack_a) > 3 && !ft_check_sorted(*stack_a))
		pb(stack_a, &stack_b, 0);
	if (ft_lstsize(*stack_a) > 3 && !ft_check_sorted(*stack_a))
		ft_sort_b_till_3(stack_a, &stack_b);
	if (!ft_check_sorted(*stack_a))
		ft_sort_three(stack_a);
	return (stack_b);
}

t_stack	**ft_sort_a(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*tmp;

	while (*stack_b)
	{
		tmp = *stack_b;
		i = ft_rotate_type_ba(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_case_rarb_a(*stack_a, *stack_b, tmp->num))
				i = ft_apply_rarb(stack_a, stack_b, tmp->num, 'b');
			else if (i == ft_case_rarrb_a(*stack_a, *stack_b, tmp->num))
				i = ft_apply_rarrb(stack_a, stack_b, tmp->num, 'b');
			else if (i == ft_case_rrarrb_a(*stack_a, *stack_b, tmp->num))
				i = ft_apply_rrarrb(stack_a, stack_b, tmp->num, 'b');
			else if (i == ft_case_rrarb_a(*stack_a, *stack_b, tmp->num))
				i = ft_apply_rrarb(stack_a, stack_a, tmp->num, 'b');
			else
				tmp = tmp->next;
		}
	}
	return (stack_a);
}

void	ft_sort(t_stack **stack_a)
{
	t_stack	*stack_b;
	int		i;

	stack_b = NULL;
	if (ft_lstsize(*stack_a) == 2)
		sa(stack_a, 0);
	else
	{
		stack_b = ft_sort_b(stack_a);
		stack_a = ft_sort_a(stack_a, &stack_b);
		i = ft_find_index(*stack_a, ft_min(*stack_a));
		if (i < ft_lstsize(*stack_a) - i)
		{
			while ((*stack_a)->num != ft_min(*stack_a))
				ra(stack_a, 0);
		}
		else
		{
			while ((*stack_a)->num != ft_min(*stack_a))
				rra(stack_a, 0);
		}
	}
}
