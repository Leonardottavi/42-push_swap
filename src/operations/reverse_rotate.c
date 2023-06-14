/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:27:00 by lottavi           #+#    #+#             */
/*   Updated: 2023/06/14 09:28:31 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

void	reverse_rotate(t_stack *stack)
{
	stack->top = stack->top->prev;
}

int	rra(t_stack *a, t_stack *b)
{
	reverse_rotate(a);
	b->len = b->len;
	write(1, "rra\n", 4);
	return (1);
}

int	rrb(t_stack *a, t_stack *b)
{
	reverse_rotate(b);
	a->len = a->len;
	write(1, "rrb\n", 4);
	return (1);
}

int	rrr(t_stack *a, t_stack *b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	write(1, "rrr\n", 4);
	return (1);
}
