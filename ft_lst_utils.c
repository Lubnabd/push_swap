/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:56:26 by labdelkh          #+#    #+#             */
/*   Updated: 2025/01/21 10:56:28 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(t_stack *a)
{
	int	i;

	i = a->num;
	while (a)
	{
		if (a->num < i)
			i = a->num;
		a = a->next;
	}
	return (i);
}

int	ft_max(t_stack *a)
{
	int	i;

	i = a->num;
	while (a)
	{
		if (a->num > i)
			i = a->num;
		a = a->next;
	}
	return (i);
}

int	ft_find_index(t_stack *a, int nbr)
{
	int	i;

	i = 0;
	while (a->num != nbr)
	{
		i++;
		a = a->next;
	}
	return (i);
}

int	ft_find_place_b(t_stack *b, int num_push)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	if (num_push > b->num && num_push < ft_lstlast(b)->num)
		i = 0;
	else if (num_push > ft_max(b) || num_push < ft_min(b))
		i = ft_find_index(b, ft_max(b));
	else
	{
		tmp = b->next;
		while (b->num < num_push || tmp->num > num_push)
		{
			b = b->next;
			tmp = b->next;
			i++;
		}
	}
	return (i);
}

int	ft_find_place_a(t_stack *a, int num_push)
{
	int		i;
	t_stack	*tmp;

	i = 1;
	if (num_push < a->num && num_push > ft_lstlast(a)->num)
		i = 0 ;
	else if (num_push > ft_max(a) || num_push < ft_min(a))
		i = ft_find_index(a, ft_min(a));
	else
	{
		tmp = a->next;
		while (a->num > num_push || tmp->num < num_push)
		{
			a = a->next;
			tmp = a->next;
			i++;
		}
	}
	return (i);
}
