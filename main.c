/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:02:52 by lottavi           #+#    #+#             */
/*   Updated: 2023/06/08 12:05:35 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (argc == 1)
		return (0);
	if (!init_stacks(&a, &b, argc, argv))
		return (write(1,"error\n" 1));
	sort_stacks(&a, &b);
	free_whole_list(a.top, a.len);
	return (0);
}
