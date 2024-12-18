/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarras <dacarras@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:13:27 by dacarras          #+#    #+#             */
/*   Updated: 2024/11/01 18:28:45 by dacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	c;

	c = '\0';
	ft_memset(s, c, n);
}

/* int main ()
{
	char *s = malloc(10);
	int i = 0;
	while(i < 5)
	{
		s[i] = 'a';
		i++;
	}
	size_t n = 8;
	ft_bzero(s, n);
	printf("result: %s", s);
	char c = *s;
	free(s);
} */
