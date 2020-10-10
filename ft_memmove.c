/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 01:10:27 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/11 02:08:13 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*c_dst;
	char	*c_src;

	c_dst = (char *)dst;
	c_src = (char *)src;
	if (c_dst < c_src)
		return (ft_memcpy(dst, src, len));
	else if (c_dst > c_src)
	{
		while (len > 0)
		{
			c_dst[len - 1] = c_src[len - 1];
			len--;
		}
	}
	return (dst);
}
