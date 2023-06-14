/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:32:18 by lottavi           #+#    #+#             */
/*   Updated: 2023/06/14 09:34:17 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap.h"

static void	swap(t_stack *stack)
{
	int	tmp;

	if (stack->len <= 1)
		return;
	tmp = stack->top->next->number;
	stack->top->next->number = stack->top->number;
	stack->top->number = tmp;
}

void	sa(t_stack *a, t_stack *b)
{
	swap(a);
	b->len = b->len;
	write(1, "sa\n", 3);
}

void	sb(t_stack *a, t_stack *b)
{
	swap(b);
	a->len = a->len;
	write(1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}
