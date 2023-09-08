/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaharkat <yaharkat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:57:05 by yaharkat          #+#    #+#             */
/*   Updated: 2023/09/07 13:57:05 by yaharkat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    if (ac >= 2)
    {
        while (*av[ac - 1])
        {
            write(1, av[ac - 1], 1);
            av[ac - 1]++;
        }
    }
    write(1,"\n", 1);
    return (0);
}