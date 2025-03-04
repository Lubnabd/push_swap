/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_handle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:55:13 by labdelkh          #+#    #+#             */
/*   Updated: 2025/01/21 10:55:14 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_new_stack(int data)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		ft_error();
	new->next = NULL;
	new->num = data;
	return (new);
}

t_stack	*ft_lstlast(t_stack *first_node)
{
	if (!first_node)
		return (NULL);
	while (first_node->next)
		first_node = first_node->next;
	return (first_node);
}

int	ft_lstsize(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

void	ft_stack_add_back(t_stack **stack, t_stack *new_stack)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = new_stack;
	else
		(ft_lstlast(*stack))->next = new_stack;
}
