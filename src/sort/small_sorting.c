/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:42:52 by lottavi           #+#    #+#             */
/*   Updated: 2023/06/14 10:53:07 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_smallest(t_list *list, size_t len)
{
	int	smallest;

	smallest = list->number;
	if (len == 1)
		return (smallest);
	list = list->next;
	while (--len)
	{
		if (smallest > list->number)
			smallest = list->number;
		list = list->next;
	}
	return (smallest);
}

static int	generate_order(t_list *list, size_t len)
{
	int	order;
	int	smallest;

	order = 0x0000;
	smallest = get_smallest(list, len);
	while (len--)
	{
		order += (list->number - smallest) * ft_pow(16, len);
		list = list->next;
	}
	return (order);
}

static void	sort_by_removal(t_stack *a, t_stack *b)
{
	int	smallest;

	smallest = get_smallest(a->top, a->len);
	if (is_closer_down(a, smallest))
	{
		while (a->top->number != smallest)
			ra(a, b);
	}
	else
	{
		while (a->top->number != smallest)
			rra(a, b);
	}
	pb(a, b);
	sort_small_stack(a, b);
	pa(a, b);
}

void	sort_small_stack(t_stack *a, t_stack *b)
{
	int	order;

	order = generate_order(a->top, a->len);
	if (is_already_sorted(a->top, a->len))
		return ;
	if (order == 0x01 || order == 0x012 || order == 0x0123 || order == 0x01234)
		return ;
	else if (order == 0x10 || order == 0x102 || order == 0x1023)
		sa(a, b);
	else if (order == 0x120 || order == 0x1230)
		rra(a, b);
	else if (order == 0x201 || order == 0x3012)
		ra(a, b);
	else if (order == 0x021 || order == 0x0312)
	{
		sa(a, b);
		ra(a, b);
	}
	else if (order == 0x210 || order == 0x2130)
	{
		sa(a, b);
		rra(a, b);
	}
	else
		sort_by_removal(a, b);
}
