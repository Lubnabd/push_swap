/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:54:12 by labdelkh          #+#    #+#             */
/*   Updated: 2025/01/21 10:54:14 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write (2, "Error\n", 6);
	exit(1);
}

void	ft_wrong_num(char **tmp, t_stack **lst)
{
	ft_free_arr(tmp);
	free(tmp);
	ft_free(lst);
	ft_error();
}
