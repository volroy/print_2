/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 20:07:50 by yorlov            #+#    #+#             */
/*   Updated: 2017/10/11 20:07:51 by yorlov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "./inc/ft_printf.h"
#include <locale.h>

int		main(void)
{
	// int i;

	// printf("%s", "ø");
	// printf("\n");
	// printf("here\n");
	ft_printf("%C%C", '4', '2');
	// i = ft_printf("%-05d", 42);
	// printf("[%d]\n", i);
	return (0);
}
