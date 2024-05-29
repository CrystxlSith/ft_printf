/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopfeiff <jopfeiff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 14:42:38 by jopfeiff          #+#    #+#             */
/*   Updated: 2024/05/29 16:42:58 by jopfeiff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include "libft/libft.h"

void	ft_putnbr(int n);
void	ft_putchar(char c);
char	*ft_itoa(int n);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *s);

#endif