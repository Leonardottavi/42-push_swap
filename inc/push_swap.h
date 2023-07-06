/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:24:57 by lottavi           #+#    #+#             */
/*   Updated: 2023/07/06 11:41:18 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <stddef.h>

# define T_LIST_MEM_SIZE 8

typedef struct s_stack
{
	size_t		len;
	t_list		*top;
}				t_stack;

typedef struct s_list	t_list;
struct		s_list
{
	t_list	*prev;
	t_list	*next;
	int		number;
};

void			sort_stacks(t_stack *a, t_stack *b);
int				skip_smallest(t_stack *a, t_stack *b, int smallest);
bool			is_closer_down(t_stack *b, int smallest);
void			sort_small_stack(t_stack *a, t_stack *b);

bool			init_stacks(t_stack *a, t_stack *b, int argc, char **argv);
bool			replace_with_index(t_list *list, size_t len);

void			print_stacks(t_stack *a, t_stack *b);
int				print_err(void);

void			*new_node(int number);
void			insert_before(t_list *list, t_list *node);
void			insert_after(t_list *list, t_list *node);
void			free_node(t_list *node);
void			free_whole_list(t_list *list, size_t len);

bool			sa(t_stack *a, t_stack *b);
bool			sb(t_stack *a, t_stack *b);
bool			ss(t_stack *a, t_stack *b);
bool			pa(t_stack *a, t_stack *b);
bool			pb(t_stack *a, t_stack *b);
bool			ra(t_stack *a, t_stack *b);
bool			rb(t_stack *a, t_stack *b);
bool			rr(t_stack *a, t_stack *b);
bool			rra(t_stack *a, t_stack *b);
bool			rrb(t_stack *a, t_stack *b);
bool			rrr(t_stack *a, t_stack *b);

int				print_err(void);
bool			is_already_sorted(t_list *list, size_t len);

#endif
