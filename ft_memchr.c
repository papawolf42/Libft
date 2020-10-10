/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 03:19:03 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/11 03:38:32 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t len)
{
	const unsigned char	*str_b;
	size_t				i;

	str_b = (const unsigned char *)b;
	i = 0;
	while (i < len)
	{
		if (str_b[i] == (unsigned char)c)
			return ((void *)(str_b + i));
		i++;
	}
	return (NULL);
}
