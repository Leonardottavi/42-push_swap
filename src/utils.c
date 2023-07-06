/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:03:03 by lottavi           #+#    #+#             */
/*   Updated: 2023/07/06 12:51:18 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>

void	*new_node(int number)
{
	t_list	*new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->next = NULL;
	new->number = number;
	return (new);
}

void	insert_before(t_list *list, t_list *node)
{
	if (!list || !node)
		return ;
	node->prev = list->prev;
	node->next = list;
	if (node->prev)
		node->prev->next = node;
	if (node->next)
		node->next->prev = node;
}

void	insert_after(t_list *list, t_list *node)
{
	if (!list || !node)
		return ;
	node->prev = list;
	node->next = list->next;
	if (node->prev)
		node->prev->next = node;
	if (node->next)
		node->next->prev = node;
}

void	free_node(t_list *node)
{
	if (node->prev)
		node->prev->next = node->next;
	if (node->next)
		node->next->prev = node->prev;
	free(node);
}

void	free_whole_list(t_list *list, size_t len)
{
	if (!list)
		return ;
	while (len--)
		free_node(list->next);
}
