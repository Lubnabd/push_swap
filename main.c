/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:53:18 by labdelkh          #+#    #+#             */
/*   Updated: 2025/01/21 11:03:27 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;

	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	else
		a = ft_process(argc, argv);
	if (!a || ft_check_dup(a))
	{
		ft_free(&a);
		ft_error();
	}
	if (!ft_check_sorted(a))
		ft_sort(&a);
	ft_free(&a);
}
