/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:29:15 by lottavi           #+#    #+#             */
/*   Updated: 2023/06/14 10:48:31 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

static void	rotate(t_stack *stack)
{
	stack->top = stack->top->next;
}

bool	ra(t_stack *a, t_stack *b)
{
	rotate(a);
	b->len = b->len;
	write(1, "ra\n", 3);
	return (true);
}

bool	rb(t_stack *a, t_stack *b)
{
	rotate(b);
	a->len = a->len;
	write(1, "rb\n", 3);
	return (true);
}

bool	rr(t_stack *a, t_stack *b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
	return (true);
}
