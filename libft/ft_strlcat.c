/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopfeiff <jopfeiff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 19:30:23 by crystal           #+#    #+#             */
/*   Updated: 2024/05/21 10:31:46 by jopfeiff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// strlcat - Append a length-limited, NUL-terminated string to another 

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;
	int		j;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	j = 0;
	i = dlen;
	if (size == 0)
		return (slen);
	if (size < dlen)
		return (slen + size);
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	if (dlen < size)
		dst[dlen + i] = '\0';
	return (dlen + slen);
}

// int main() {
//     char dst[20] = "Hello, ";
//     char src[] = "world!";
//     size_t dst_len = strlen(dst);

//     size_t result = ft_strlcat(dst, src, 0);

//     printf("Chaîne concaténée : %s\n", dst);
//     printf("Longueur totale : %zu\n", result);
//     printf("Longueur initiale de dst : %zu\n", dst_len);
//     printf("Taille de dst après concaténation : %zu\n", strlen(dst));
//     return 0;
// }