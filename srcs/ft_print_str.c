/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crystal <crystal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 13:19:01 by jopfeiff          #+#    #+#             */
/*   Updated: 2024/05/31 17:14:32 by crystal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (print_str("(null)"));
	while (str[i])
		i += print_char((int)str[i]);
	return (i);
}