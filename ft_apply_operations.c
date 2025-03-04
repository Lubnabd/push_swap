/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_operations.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:55:44 by labdelkh          #+#    #+#             */
/*   Updated: 2025/01/21 10:55:45 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_apply_rarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->num != c && ft_find_place_b(*b, c) > 0)
			rr(a, b, 0);
		while ((*a)->num != c)
			ra(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			rb(b, 0);
		pb(a, b, 0);
	}
	else
	{
		while ((*b)->num != c && ft_find_place_a(*a, c) > 0)
			rr(a, b, 0);
		while ((*b)->num != c)
			rb(b, 0);
		while (ft_find_place_a(*a, c) > 0)
			ra(a, 0);
		pa(a, b, 0);
	}
	return (-1);
}

int	ft_apply_rrarrb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->num != c && ft_find_place_b(*b, c) > 0)
			rrr(a, b, 0);
		while ((*a)->num != c)
			rra(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			rrb(b, 0);
		pb(a, b, 0);
	}
	else
	{
		while ((*b)->num != c && ft_find_place_a(*a, c) > 0)
			rrr(a, b, 0);
		while ((*b)->num != c)
			rrb(b, 0);
		while (ft_find_place_a(*a, c) > 0)
			rra(a, 0);
		pa(a, b, 0);
	}
	return (-1);
}

int	ft_apply_rrarb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->num != c)
			rra(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			rb(b, 0);
		pb(a, b, 0);
	}
	else
	{
		while (ft_find_place_a(*a, c) > 0)
			rra(a, 0);
		while ((*b)->num != c)
			rb(b, 0);
		pa(a, b, 0);
	}
	return (-1);
}

int	ft_apply_rarrb(t_stack **a, t_stack **b, int c, char s)
{
	if (s == 'a')
	{
		while ((*a)->num != c)
			ra(a, 0);
		while (ft_find_place_b(*b, c) > 0)
			rrb(b, 0);
		pb(a, b, 0);
	}
	else
	{
		while (ft_find_place_a(*a, c) > 0)
			ra(a, 0);
		while ((*b)->num != c)
			rrb(b, 0);
		pa(a, b, 0);
	}
	return (-1);
}
