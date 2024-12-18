/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarras <dacarras@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:52:27 by dacarras          #+#    #+#             */
/*   Updated: 2024/10/29 18:09:04 by dacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*x;
	size_t	i;

	i = 0;
	x = (char *) s;
	while (i < n)
	{
		x[i] = (char) c;
		i++;
	}
	return (s);
}
