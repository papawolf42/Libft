/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 20:04:10 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/21 07:36:18 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	unsigned char		*pdst;
	const unsigned char *psrc;
	unsigned char		stop;

	pdst = dst;
	psrc = src;
	stop = c;
	while (len--)
		if ((*pdst++ = *psrc++) == stop)
			return (pdst);
	return (NULL);
}
