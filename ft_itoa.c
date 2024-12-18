/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarras <dacarras@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 20:27:23 by dacarras          #+#    #+#             */
/*   Updated: 2024/11/01 18:02:18 by dacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*invert_str(char *str)
{
	char	aux;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(str) - 1;
	if (str[i] == '-')
		i++;
	while (i != ft_strlen(str) / 2)
	{
		aux = str[j];
		str[j] = str[i];
		str[i] = aux;
		i++;
		j--;
	}
	if (ft_strlen(str) % 2 == 1)
	{
		aux = str[j];
		str[j] = str[i];
		str[i] = aux;
	}
	return (str);
}

static long	size_n(long nbr)
{
	long	size;

	size = 0;
	if (nbr == 0)
		return (size + 1);
	if (nbr < 0)
		size++;
	while (nbr != 0)
	{
		size++;
		nbr = nbr / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*res;
	long	nbr;

	nbr = n;
	i = 0;
	res = (char *)malloc(size_n(nbr) + 1);
	if (!res)
		return (NULL);
	if (nbr < 0)
	{
		nbr = -nbr;
		res[0] = '-';
		i++;
	}
	while (nbr >= 0)
	{
		res[i] = (nbr % 10) + 48;
		i++;
		nbr = nbr / 10;
		if (nbr == 0)
			break ;
	}
	res[i] = '\0';
	return (invert_str(res));
}
