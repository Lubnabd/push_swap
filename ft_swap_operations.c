/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_operations.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:58:33 by labdelkh          #+#    #+#             */
/*   Updated: 2025/01/21 10:58:35 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*tmp;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
}

void	sa(t_stack **a, int j)
{
	swap(a);
	if (!j)
		write(1, "sa\n", 3);
}

void	sb(t_stack **b, int j)
{
	swap(b);
	if (!j)
		write(1, "sa\n", 3);
}

void	ss(t_stack **a, t_stack **b, int j)
{
	swap(a);
	swap(b);
	if (!j)
		write (1, "ss\n", 3);
}
