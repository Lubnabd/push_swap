/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cases_ba.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:52:33 by labdelkh          #+#    #+#             */
/*   Updated: 2025/01/21 10:52:36 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_case_rarb_a(t_stack *a, t_stack *b, int c)
{
	int		i;

	i = ft_find_place_a(a, c);
	if (i < ft_find_index(b, c))
		i = ft_find_index(b, c);
	return (i);
}

int	ft_case_rrarrb_a(t_stack *a, t_stack *b, int c)
{
	int		i;

	i = 0;
	if (ft_find_place_a(a, c))
		i = ft_lstsize(a) - ft_find_place_a(a, c);
	if ((i < (ft_lstsize(b) - ft_find_index(b, c))) && ft_find_index(b, c))
		i = ft_lstsize(b) - ft_find_index(b, c);
	return (i);
}

int	ft_case_rarrb_a(t_stack *a, t_stack *b, int c)
{
	int		i;

	i = 0;
	if (ft_find_index(b, c))
		i = ft_lstsize(b) - ft_find_index(b, c);
	i = ft_find_place_a(a, c) + i;
	return (i);
}

int	ft_case_rrarb_a(t_stack *a, t_stack *b, int c)
{
	int		i;

	i = 0;
	if (ft_find_place_a(a, c))
		i = ft_lstsize(a) - ft_find_place_a(a, c);
	i = ft_find_index(b, c) + i;
	return (i);
}
