/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saelee <saelee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:44:46 by saelee            #+#    #+#             */
/*   Updated: 2021/07/07 20:44:56 by saelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_order(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack->b_size == 0)
	{
		while (i < stack->a_size - 1)
		{
			if (stack->a[i] < stack->a[i + 1])
				i++;
			else
				break ;
		}
		if (i == (stack->a_size - 1))
			return (1);
		return (0);
	}
	return (0);
}

int	smaller_than_stack_a(t_stack *stack, int i)
{
	int	j;

	j = 0;
	while (j < stack->a_size)
	{
		if (stack->b[i] > stack->a[j])
			return (0);
		j++;
	}
	return (1);
}

int	max_in_stack(t_stack *stack)
{
	int	j;
	int	index;
	int	max;

	j = 0;
	index = 0;
	max = 0;
	while (j < stack->a_size)
	{
		if (stack->a[j] > max)
		{
			max = stack->a[j];
			index = j;
		}
		j++;
	}
	return (index);
}

int	min_in_stack(t_stack *stack)
{
	int	j;
	int	index;
	int	min;

	index = 0;
	min = stack->a[0];
	j = 0;
	while (j < stack->a_size)
	{
		if (stack->a[j] < min)
		{
			min = stack->a[j];
			index = j;
		}
		j++;
	}
	return (index);
}

int	bigger_than_stack_a(t_stack *stack, int i)
{
	int	j;

	j = 0;
	while (j < stack->a_size)
	{
		if (stack->b[i] < stack->a[j])
			return (0);
		j++;
	}
	return (1);
}
