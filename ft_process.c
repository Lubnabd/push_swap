/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:54:37 by labdelkh          #+#    #+#             */
/*   Updated: 2025/01/21 10:54:40 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free_arr(char **tmp_arr)
{
	char	*s;

	if (!tmp_arr)
		return ;
	while (*tmp_arr)
	{
		s = *tmp_arr;
		tmp_arr++;
		free(s);
	}
	*tmp_arr = NULL;
}

int	ft_atol(char *s, char **tmp, t_stack **lst)
{
	int				sign;
	long long int	res;

	res = 0;
	sign = 1;
	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s)
	{
		if (*s < '0' || *s > '9')
			ft_wrong_num(tmp, lst);
		res = res * 10 + (*s - '0');
		s++;
	}
	if ((res * sign) > 2147483647 || (res * sign) < -2147483648)
		ft_wrong_num(tmp, lst);
	return (res * sign);
}

t_stack	*ft_sub_proc(char **argv)
{
	t_stack	*sub_proc_res;
	char	**tmp;
	int		i;
	int		j;

	sub_proc_res = NULL;
	i = 0;
	tmp = ft_split(argv[1], ' ');
	if (!tmp)
		ft_error();
	if (!tmp[0])
	{
		free(tmp);
		exit(1);
	}
	while (tmp[i])
	{
		j = ft_atol(tmp[i], tmp, &sub_proc_res);
		ft_stack_add_back(&sub_proc_res, ft_new_stack(j));
		i++;
	}
	ft_free_arr(tmp);
	free(tmp);
	return (sub_proc_res);
}

t_stack	*ft_process(int argc, char **argv)
{
	t_stack	*proc_res;
	t_stack	*new_node;
	int		i;
	int		j;

	i = 1;
	proc_res = NULL;
	if (argc < 2)
		ft_error();
	if (argc == 2)
		proc_res = ft_sub_proc(argv);
	else
	{
		while (i < argc)
		{
			j = ft_atol(argv[i], NULL, &proc_res);
			new_node = ft_new_stack(j);
			ft_stack_add_back(&proc_res, new_node);
			i++;
		}
	}
	return (proc_res);
}
