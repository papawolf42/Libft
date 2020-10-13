/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 02:22:10 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/13 19:23:11 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len_s;
	int		i;
	int		bool_find;

	bool_find = 0;
	len_s = ft_strlen(s);
	i = len_s;
	while (i >= 0)
	{
		if (s[i] == (char)c)
		{
			bool_find = 1;
			break ;
		}
		i--;
	}
	if (bool_find == 0)
		return (NULL);
	return ((char *)s + i);
}
