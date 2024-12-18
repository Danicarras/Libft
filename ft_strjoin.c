/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarras <dacarras@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 21:27:43 by dacarras          #+#    #+#             */
/*   Updated: 2024/10/29 18:10:02 by dacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		size;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	res = (char *) malloc (size);
	if (!res)
		return (NULL);
	else
	{
		ft_strlcpy(res, s1, size);
		ft_strlcat(res, s2, size);
	}
	return (res);
}
