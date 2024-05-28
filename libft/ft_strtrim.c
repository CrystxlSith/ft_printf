/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopfeiff <jopfeiff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:52:52 by crystal           #+#    #+#             */
/*   Updated: 2024/05/20 10:15:49 by jopfeiff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"

int	get_end(const char *s1, const char *set)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s1);
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) != NULL)
			break ;
		i++;
	}
	return (len - i);
}

int	get_start(const char *s1, const char *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (ft_strrchr(set, s1[i]) == NULL)
			break ;
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	int		i;
	int		j;

	i = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (s1[i] && ft_strrchr(set, s1[i]) != NULL)
		i++;
	j = i;
	while (s1[j] && ft_strchr(set, s1[j]) == NULL)
		j++;
	newstr = (char *)malloc(sizeof(char) * (j - i) + 1);
	if (!newstr)
		return (NULL);
	j = -1;
	while (s1[i] && ft_strchr(set, s1[i]) == NULL)
	{
		newstr[++j] = s1[i];
		i++;
	}
	newstr[j + 1] = '\0';
	return (newstr);
}

// int main(void)
// {
// 	char *str;
// 	// str = ft_strtrim("   xxxtripouille", " x");
// 	str = ft_strtrim("tripouille   xxx", " x");
// 	printf("%s", str);
// 	return 0;
// }
