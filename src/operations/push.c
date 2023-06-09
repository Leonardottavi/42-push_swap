/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:47:54 by lottavi           #+#    #+#             */
/*   Updated: 2023/06/14 10:54:04 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

static t_list	*pop_node(t_stack *stack)
{
	t_list	*popped;

	popped = stack->top;
	if (stack->len == 1)
		stack->top = NULL;
	else
	{
		stack->top = stack->top->next;
		stack->top->prev = stack->top->prev->prev;
		stack->top->prev->next = stack->top;
	}
	popped->next = popped;
	popped->prev = popped;
	return (popped);
}

static void	push(t_stack *to, t_stack *from)
{
	t_list	*svg;

	if (!from->len)
		return ;
	svg = pop_node(from);
	if (to->len == 0)
		to->top = svg;
	else
	{
		svg->next = to->top;
		svg->prev = to->top->prev;
		to->top->prev->next = svg;
		to->top->prev = svg;
		to->top = to->top->prev;
	}
	from->len--;
	to->len++;
}

bool	pa(t_stack *a, t_stack *b)
{
	push(a, b);
	write(1, "pa\n", 3);
	return (true);
}

bool	pb(t_stack *a, t_stack *b)
{
	push(b, a);
	write(1, "pb\n", 3);
	return (true);
}
