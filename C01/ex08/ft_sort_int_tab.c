/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:08:25 by yaharkat          #+#    #+#             */
/*   Updated: 2023/08/18 23:13:50 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	j;
	int	tmp;
	int	is_swapped;

	index = 0;
	while (index < size)
	{
		j = 0;
		is_swapped = 0;
		while (j < size - index)
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap(&tab[j], &tab[j + 1]);
				is_swapped = 1;
			}
			j++;
		}
		if (!is_swapped)
			break ;
		index++;
	}
}
