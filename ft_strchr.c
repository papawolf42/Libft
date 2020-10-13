/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 01:50:58 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/13 19:22:59 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		len_s;
	size_t		i;
	size_t		bool_find;

	bool_find = 0;
	len_s = ft_strlen(s);
	i = 0;
	while (i < len_s + 1)
	{
		if (s[i] == (char)c)
		{
			bool_find = 1;
			break ;
		}
		i++;
	}
	if (bool_find == 0)
		return (NULL);
	return ((char *)s + i);
}
