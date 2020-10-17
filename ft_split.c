/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 21:06:50 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/17 08:39:30 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_strscpy(char **strs, const char *s, char c)
{
	size_t	i;
	size_t	num;
	size_t	start;

	i = 0;
	num = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] == '\0')
			break ;
		if (s[i] != c)
			start = i;	
		while (s[i] != c && s[i])
			i++;
		strs[num] = (char *)malloc(sizeof(char) * (i - start + 1));
		if (!strs[num])
			return (NULL);;
		ft_strlcpy(strs[num], s + start, i - start + 1);
		num++;
	}
	return (strs);
}

static char		**ft_get_num_blocks(char const *s, char c)
{
	size_t	num;
	size_t	i;
	char	**strs;

	num = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i] != '\0')
			num++;
		while (s[i] != c && s[i])
			i++;
	}
	strs = (char **)calloc((num + 1), sizeof(char *));
	if (!strs)
		return (NULL);
	strs[num] = NULL;
	return (strs);
}

void			ft_free_rest(char **strs)
{
	while (*strs)
	{
		free(*strs);
		(*strs)++;
	}
	free(strs);
}

char			**ft_split(char const *s, char c)
{
	char	**strs;

	if (!s)
		return (NULL);
	if (!(strs = ft_get_num_blocks(s, c)))
		return (NULL);
	if (!(ft_strscpy(strs, s, c)))
	{
		ft_free_rest(strs);
		return (NULL);
	}
	return (strs);
}
