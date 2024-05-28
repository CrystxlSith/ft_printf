/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopfeiff <jopfeiff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:01:51 by crystal           #+#    #+#             */
/*   Updated: 2024/05/16 13:41:37 by jopfeiff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (c == 0)
	{
		while (*s)
			s++;
		if (*s == c)
			return ((char *)s);
	}
	while (*s)
	{
		if ((*s == c) || (!ft_isascii(c)))
			return ((char *)s);
		s++;
	}
	return (NULL);
}
