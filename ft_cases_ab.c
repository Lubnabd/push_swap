/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cases_ab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:55:54 by labdelkh          #+#    #+#             */
/*   Updated: 2025/01/21 10:56:03 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_case_rarb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = ft_find_place_b(b, c);
	if (i < ft_find_index(a, c))
		i = ft_find_index(a, c);
	return (i);
}

int	ft_case_rrarrb(t_stack *a, t_stack *b, int c)
{
	int		i;

	i = 0;
	if (ft_find_place_b(b, c))
		i = ft_lstsize(b) - ft_find_place_b(b, c);
	if ((i < (ft_lstsize(a) - ft_find_index(a, c))) && ft_find_index(a, c))
		i = ft_lstsize(a) - ft_find_index(a, c);
	return (i);
}

int	ft_case_rrarb(t_stack *a, t_stack *b, int c)
{
	int		i;

	i = 0;
	if (ft_find_index(a, c))
		i = ft_lstsize(a) - ft_find_index(a, c);
	i = ft_find_place_b(b, c) + i;
	return (i);
}

int	ft_case_rarrb(t_stack *a, t_stack *b, int c)
{
	int		i;

	i = 0;
	if (ft_find_place_b(b, c))
		i = ft_lstsize(b) - ft_find_place_b(b, c);
	i = ft_find_index(a, c) + i;
	return (i);
}
