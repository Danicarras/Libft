/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarras <dacarras@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:29:54 by dacarras          #+#    #+#             */
/*   Updated: 2024/10/29 18:10:08 by dacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!set || !s1)
		return (NULL);
	j = 0;
	i = ft_strlen(s1);
	while (ft_strchr(set, s1[j]) && s1[j] != '\0')
		j++;
	while (ft_strchr(set, s1[i - 1]) && i > j)
		i--;
	return (ft_substr(s1, j, i - j));
}
