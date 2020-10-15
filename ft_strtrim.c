/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 07:01:31 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/15 23:36:47 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isset(char const c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static int		ft_pass_set(char const *s1, char const *set, size_t direction, size_t strlen)
{
	size_t	i;

	i = 0;
	while (i < strlen)
	{
		if (!ft_isset(*s1, set))
			break;
		i++;
		s1 += direction;
	}
	return (i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	strlen;
	size_t	start;
	size_t	end;
	char	*str_trimed;

	if (!s1 || !set)
		return (NULL);
	strlen = ft_strlen(s1);
	start = ft_pass_set(s1, set, 1, strlen);
	end = strlen - ft_pass_set(s1 + strlen - 1, set, -1, strlen);
	if (start > end)
		start = end;
	if (!(str_trimed = (char *)malloc(sizeof(char) * (end - start + 1))))
		return (NULL);
	ft_strlcpy(str_trimed, s1 + start, end - start + 1);
	return (str_trimed);
}
