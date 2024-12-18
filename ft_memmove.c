/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarras <dacarras@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:27:21 by dacarras          #+#    #+#             */
/*   Updated: 2024/11/01 18:28:15 by dacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp_dst;
	char	*temp_src;
	size_t	i;

	temp_dst = (char *)dest;
	temp_src = (char *)src;
	if (temp_dst == NULL && temp_src == NULL)
		return (NULL);
	if (temp_src < temp_dst)
	{
		i = n;
		while (i-- > 0)
			temp_dst[i] = temp_src[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			temp_dst[i] = temp_src[i];
			i++;
		}
	}
	return (temp_dst);
}
