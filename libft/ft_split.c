/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopfeiff <jopfeiff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:02:38 by crystal           #+#    #+#             */
/*   Updated: 2024/05/21 10:42:26 by jopfeiff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countword(const char *str, char c)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[j])
	{
		if (str[j] != c)
		{
			i++;
			while (str[j] && str[j] != c)
				j++;
		}
		if (str[j] == c)
			j++;
	}
	return (i);
}

char	*ft_strrdup(const char *s, int start, int end)
{
	char	*dup;
	int		i;

	i = 0;
	dup = malloc(sizeof(char) * (end - start + 1));
	if (!dup)
		return (NULL);
	while (start < end)
	{
		dup[i] = s[start];
		i++;
		start++;
	}
	dup[i] = '\0';
	return (dup);
}

char	**ft_split(char const *s, char c)
{
	int		start;
	char	**str;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	start = -1;
	str = malloc((countword(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start == -1)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start > -1)
		{
			str[j] = ft_strrdup(s, start, i);
			start = -1;
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

// int main(void)
// {
// 	char **str;
// 	int	i = 0;
// 	str = ft_split("  tripouille  42  ", ' ');
// 	while (str[i] != NULL)
// 	{
// 		printf("%s\n", str[i]);
// 		free(str[i]);
// 		i++;
// 	}
// 	free(str);
// 	return 0;
// }
