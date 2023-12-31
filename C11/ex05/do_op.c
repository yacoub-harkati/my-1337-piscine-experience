/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:40:22 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/05 22:20:43 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	calculate_op(int a, int b, char op, int (*operrators[])(int, int))
{
	int	result;

	result = 0;
	if (op == '+')
		result = operrators[0](a, b);
	if (op == '-')
		result = operrators[1](a, b);
	if (op == '/')
		result = operrators[2](a, b);
	if (op == '*')
		result = operrators[3](a, b);
	if (op == '%')
		result = operrators[4](a, b);
	return (result);
}

void	do_op(int a, int b, char op)
{
	int	result;
	int	(*operrators[5])(int, int);

	operrators[0] = ft_addition;
	operrators[1] = ft_substraction;
	operrators[2] = ft_division;
	operrators[3] = ft_multiplication;
	operrators[4] = ft_modulo;
	result = calculate_op(a, b, op, operrators);
	ft_putnbr(result);
	ft_putchar('\n');
}
