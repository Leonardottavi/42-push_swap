/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_linked_listc.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:46:31 by lottavi           #+#    #+#             */
/*   Updated: 2023/06/14 10:46:56 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOUBLE_LINKED_LIST_H
# define DOUBLE_LINKED_LIST_H

typedef struct s_list	t_list;
struct		s_list
{
	t_list	*prev;
	t_list	*next;
	int		number;
};

void		*new_node(int number);
void		insert_before(t_list *list, t_list *node);
void		insert_after(t_list *list, t_list *node);
void		free_node(t_list *node);
void		free_whole_list(t_list *list, size_t len);

#endif
