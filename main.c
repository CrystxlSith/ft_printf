/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopfeiff <jopfeiff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:44:03 by jopfeiff          #+#    #+#             */
/*   Updated: 2024/05/30 13:44:15 by jopfeiff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main() {
	int var = 42;
	int	count;
	int *ptr = &var;
	count = 0;
    	count = ft_printf("Address of var: %p\n", (void *)ptr);
	ft_putnbr(count);
	count = printf("\nAddress of var: %p\n", (void *)ptr);
	ft_putnbr(count);
	return 0;
}