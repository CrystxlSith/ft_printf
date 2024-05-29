/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopfeiff <jopfeiff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:42:38 by jopfeiff          #+#    #+#             */
/*   Updated: 2024/05/29 18:45:43 by jopfeiff         ###   ########.fr       */
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
void	ft_putnbr(int n);
int	print_char(int c);
void	ft_putchar(char c);
char	*ft_itoa(int n);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *s);

#endif