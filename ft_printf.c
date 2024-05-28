/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopfeiff <jopfeiff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:05:59 by jopfeiff          #+#    #+#             */
/*   Updated: 2024/05/28 14:56:49 by jopfeiff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
#include <stdarg.h>
#include <stdio.h>
//va_start, va_arg, va_copy, va_end

int	parsing(const char *str, va_list args)
{
	
}



int	ft_printf(const char *s, ...)
{
	va_list	args;
	int	i;
	int	len;
	char	*str;
	
	i = 0;
	len = 0;
	// str = ft_strdup(s);
	va_start(args, s);
	while (s[i])
	{
		i++
	}
	
	len = parsing(str, args);
	va_end(args);
	free(str);
	return (len);
	
}

int main() {
	int	count;
	count = ft_printf("%d", i);
    return 0;
}