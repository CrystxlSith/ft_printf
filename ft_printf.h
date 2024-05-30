/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopfeiff <jopfeiff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:42:38 by jopfeiff          #+#    #+#             */
/*   Updated: 2024/05/30 14:12:02 by jopfeiff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <limits.h>
# include "libft/libft.h"

int	ft_print_ptr(unsigned long int i);
int	print_nb(int nb);
char	*ft_uitoa(unsigned long int n);
int	ft_print_hex(unsigned int i, char c);
int	print_char(int c);
int	print_unsigned(unsigned int nb);
int	print_str(char *str);
int	print_nb(int nb);
int	print_char(int c);
int	ft_percent();
int	ft_printf(const char *s, ...);


#endif