/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_operations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:58:24 by labdelkh          #+#    #+#             */
/*   Updated: 2025/01/21 10:58:25 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate(t_stack **stack)
{
	t_stack	*tmp;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	*stack = ft_lstlast(*stack);
	(*stack)->next = tmp;
	*stack = tmp->next;
	tmp->next = NULL;
}

void	ra(t_stack **a, int j)
{
	ft_rotate(a);
	if (!j)
		write (1, "ra\n", 3);
}

void	rb(t_stack **b, int j)
{
	ft_rotate(b);
	if (!j)
		write (1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b, int j)
{
	ft_rotate(a);
	ft_rotate(b);
	if (!j)
		write (1, "rr\n", 3);
}
