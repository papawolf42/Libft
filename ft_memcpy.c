/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 19:22:20 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/09 19:53:17 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char		*bowl_d;
	const unsigned char	*bowl_s;
	size_t				i;

	bowl_d = (unsigned char *)dst;
	bowl_s = (const unsigned char *)src;
	i = 0;
	while (i < len)
	{
		bowl_d[i] = bowl_d[i];
		i++;
	}
	return (dst);
}
