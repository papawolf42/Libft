/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 20:04:10 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/09 20:33:08 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	unsigned char		*bowl_d;
	const unsigned char *bowl_s;
	unsigned char		temp_c;
	size_t				i;

	bowl_d = (unsigned char*)dst;
	bowl_s = (const unsigned char*)src;
	temp_c = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		bowl_d[i] = bowl_s[i];
		if (bowl_s[i] == temp_c)
		{
			i++;
			break ;
		}
		i++;
	}
	return (dst);
}
