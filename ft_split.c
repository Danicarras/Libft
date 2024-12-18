/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarras <dacarras@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:20:58 by dacarras          #+#    #+#             */
/*   Updated: 2024/11/01 18:27:29 by dacarras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wlength(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static size_t	wcount(char const *s, char c)
{
	size_t	count;
	size_t	i;
	int		wordbool;

	i = 0;
	count = 0;
	wordbool = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c && wordbool == 0)
		{
			wordbool = 1;
			count++;
		}
		else if (s[i] == c && wordbool == 1)
			wordbool = 0;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**res;

	res = (char **)malloc(sizeof(char *) * (wcount(s, c) + 1));
	if (!res)
		return (NULL);
	i = -1;
	j = 0;
	while (++i < wcount(s, c) && j < ft_strlen(s))
	{
		while (s[j] == c && s[j])
			j++;
		res[i] = ft_substr(&s[j], 0, wlength(&s[j], c));
		if (!res[i])
		{
			while (i > 0)
				free(res[--i]);
			free(res);
			return (NULL);
		}
		j += wlength(&s[j], c);
	}
	res[i] = NULL;
	return (res);
}

/* int main ()
{
	char *s = "hello!zzzzzzzzzznbuhb";
	char c = 'z';
	int i = -1;
	char **res;
	res = ft_split(s, c);
	while (res[++i])
		printf("%s\n", res[i]);
} */
