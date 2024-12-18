/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarras <dacarras@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:11:30 by dacarras          #+#    #+#             */
/*   Updated: 2024/10/29 18:11:16 by dacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dest[i] && i < size)
		i++;
	j = i;
	while (j + 1 < size && src[j - i])
	{
		dest[j] = src[j - i];
		j++;
	}
	if (j < size)
		dest[j] = '\0';
	return (i + ft_strlen(src));
}
