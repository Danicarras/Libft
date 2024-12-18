/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarras <dacarras@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:24:05 by dacarras          #+#    #+#             */
/*   Updated: 2024/11/01 18:27:53 by dacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	aux;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		aux = i;
		j = 0;
		while (big[i] == little[j] && i < len)
		{
			i++;
			j++;
			if (little[j] == '\0')
			{
				return ((char *)&big[i - j]);
			}
		}
		i = aux + 1;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*big = "Holaa";
// 	const char	*little = "o";

// 	printf("%s", ft_strnstr(big, little, 5));
// }