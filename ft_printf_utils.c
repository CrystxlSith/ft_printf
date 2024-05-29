/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jopfeiff <jopfeiff@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:40:57 by jopfeiff          #+#    #+#             */
/*   Updated: 2024/05/29 18:39:23 by jopfeiff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;

	i = 0;
	dup = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!dup)
		return (NULL);
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	sizeint(long int n)
{
	int	i;

	i = 0;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}


char	*ft_itoa(int n)
{
	long int	nb;
	int			size;
	char		*result;

	nb = n;
	size = sizeint(nb);
	if (nb < 0)
		size++;
	if (nb == 0)
		return (ft_strdup("0"));
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (!result)
		return (NULL);
	if (nb < 0)
	{
		result[0] = '-';
		nb *= -1;
	}
	result[size] = '\0';
	while (nb)
	{
		result[--size] = (nb % 10) + 48;
		nb /= 10;
	}
	return (result);
}

char	*ft_uitoa(unsigned long int n)
{
	unsigned long int	nb;
	int			size;
	char		*result;

	nb = n;
	size = sizeint(nb);
	if (nb < 0)
		size++;
	if (nb == 0)
		return (ft_strdup("0"));
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (!result)
		return (NULL);
	if (nb < 0)
	{
		result[0] = '-';
		nb *= -1;
	}
	result[size] = '\0';
	while (nb)
	{
		result[--size] = (nb % 10) + 48;
		nb /= 10;
	}
	return (result);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	long int	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}