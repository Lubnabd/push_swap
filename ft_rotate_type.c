/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:56:34 by labdelkh          #+#    #+#             */
/*   Updated: 2025/01/21 10:56:36 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate_type_ba(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = b;
	i = ft_case_rrarrb_a(a, b, b->num);
	while (tmp)
	{
		if (i > ft_case_rarb_a(a, b, tmp->num))
			i = ft_case_rarb_a(a, b, tmp->num);
		if (i > ft_case_rrarrb_a(a, b, tmp->num))
			i = ft_case_rrarrb_a(a, b, tmp->num);
		if (i > ft_case_rarrb_a(a, b, tmp->num))
			i = ft_case_rarrb_a(a, b, tmp->num);
		if (i > ft_case_rrarb_a(a, b, tmp->num))
			i = ft_case_rrarb_a(a, b, tmp->num);
		tmp = tmp->next;
	}
	return (i);
}

int	ft_rotate_type_ab(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = a;
	i = ft_case_rrarrb(a, b, a->num);
	while (tmp)
	{
		if (i > ft_case_rarb(a, b, tmp->num))
			i = ft_case_rarb(a, b, tmp->num);
		if (i > ft_case_rrarrb(a, b, tmp->num))
			i = ft_case_rrarrb(a, b, tmp->num);
		if (i > ft_case_rarrb(a, b, tmp->num))
			i = ft_case_rarrb(a, b, tmp->num);
		if (i > ft_case_rrarb(a, b, tmp->num))
			i = ft_case_rrarb(a, b, tmp->num);
		tmp = tmp->next;
	}
	return (i);
}
