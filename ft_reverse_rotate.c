/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:58:07 by labdelkh          #+#    #+#             */
/*   Updated: 2025/01/21 10:58:08 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate(t_stack **stack)
{
	t_stack	*tmp;
	int		i;

	if (!*stack || !(*stack)->next)
		return ;
	i = 0;
	tmp = *stack;
	while ((*stack)->next)
	{
		i++;
		*stack = (*stack)->next;
	}
	(*stack)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
}

void	rra(t_stack **a, int j)
{
	ft_reverse_rotate(a);
	if (!j)
		write (1, "rra\n", 4);
}

void	rrb(t_stack **b, int j)
{
	ft_reverse_rotate(b);
	if (!j)
		write (1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b, int j)
{
	ft_reverse_rotate(a);
	ft_reverse_rotate(b);
	if (!j)
		write (1, "rrr\n", 4);
}
