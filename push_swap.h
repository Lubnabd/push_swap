/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labdelkh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:50:55 by labdelkh          #+#    #+#             */
/*   Updated: 2025/01/21 10:51:00 by labdelkh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				num;
	struct s_stack	*next;
}	t_stack;

t_stack	*ft_process(int argc, char **argv);
t_stack	*ft_sub_process(char **argv);
int		ft_atol(char *s, char **tmp, t_stack **lst);
void	ft_free_arr(char **tmp_arr);
void	ft_wrong_num(char **tmp, t_stack **lst);
void	ft_stack_add_back(t_stack **stack, t_stack *new_stack);
t_stack	*ft_new_stack(int data);
int		ft_lstsize(t_stack *lst);
t_stack	*ft_lstlast(t_stack *first_node);
char	**ft_split(char *s, char seperator);
void	ft_free(t_stack **lst);
void	ft_error(void);
void	ft_sort(t_stack **stack_a);
t_stack	**ft_sort_a(t_stack **stack_a, t_stack **stack_b);
t_stack	*ft_sort_b(t_stack **stack_a);
void	ft_sort_b_till_3(t_stack **stack_a, t_stack **stack_b);
void	ft_sort_three(t_stack **stack_a);
void	pa(t_stack **a, t_stack **b, int j);
void	pb(t_stack **a, t_stack **b, int j);
void	sa(t_stack **a, int j);
void	sb(t_stack **b, int j);
void	ss(t_stack **a, t_stack **b, int j);
void	ra(t_stack **a, int j);
void	rb(t_stack **b, int j);
void	rr(t_stack **a, t_stack **b, int j);
void	rra(t_stack **a, int j);
void	rrb(t_stack **b, int j);
void	rrr(t_stack **a, t_stack **b, int j);
int		ft_rotate_type_ab(t_stack *a, t_stack *b);
int		ft_rotate_type_ba(t_stack *a, t_stack *b);
int		ft_min(t_stack *a);
int		ft_max(t_stack *a);
int		ft_find_index(t_stack *a, int nbr);
int		ft_find_place_b(t_stack *b, int num_push);
int		ft_find_place_a(t_stack *a, int num_push);
int		ft_check_sorted(t_stack *stack_a);
int		ft_check_dup(t_stack *a);
int		ft_case_rarb_a(t_stack *a, t_stack *b, int c);
int		ft_case_rrarrb_a(t_stack *a, t_stack *b, int c);
int		ft_case_rarrb_a(t_stack *a, t_stack *b, int c);
int		ft_case_rrarb_a(t_stack *a, t_stack *b, int c);
int		ft_case_rarb(t_stack *a, t_stack *b, int c);
int		ft_case_rrarrb(t_stack *a, t_stack *b, int c);
int		ft_case_rrarb(t_stack *a, t_stack *b, int c);
int		ft_case_rarrb(t_stack *a, t_stack *b, int c);
int		ft_apply_rarb(t_stack **a, t_stack **b, int c, char s);
int		ft_apply_rrarrb(t_stack **a, t_stack **b, int c, char s);
int		ft_apply_rrarb(t_stack **a, t_stack **b, int c, char s);
int		ft_apply_rarrb(t_stack **a, t_stack **b, int c, char s);

#endif 
