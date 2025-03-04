/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:56:16 by labdelkh          #+#    #+#             */
/*   Updated: 2025/01/21 10:56:18 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_sorted(t_stack *stack_a)
{
	int	i;

	if (!stack_a)
		return (1);
	i = stack_a->num;
	while (stack_a)
	{
		if (i > stack_a->num)
			return (0);
		i = stack_a->num;
		stack_a = stack_a->next;
	}
	return (1);
}
