/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopfeiff <jopfeiff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 18:22:50 by jopfeiff          #+#    #+#             */
/*   Updated: 2024/05/30 10:57:46 by jopfeiff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_ad(unsigned long int n)
{
	int	i;

	i = 0;
	while (n)
	{
		i++;
		n /= 16;
	}
	return (i);
}

void	print_ptr(unsigned long int i)
{
	if (i > 15)
	{
		print_ptr(i / 16);
		print_ptr(i % 16);
	}
	else
	{
		if (i < 10)
			print_char(i + '0');
		else
			print_char(i - 10 + 'a');
	}
}

int	ft_print_ptr(unsigned long int i)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	if (i == 0)
		len += write(1, "0", 1);
	else
	{
		print_ptr(i);
		len += len_ad(i);
	}
	return (len);
}