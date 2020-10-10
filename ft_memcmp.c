/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 04:00:14 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/11 04:11:03 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *b1, const void *b2, size_t len)
{
	const unsigned char	*c1;
	const unsigned char	*c2;
	size_t				i;

	c1 = (unsigned char *)b1;
	c2 = (unsigned char *)b2;
	i = 0;
	while (i < len && (c1[i] == c2[i]))
		i++;
	if (i == len)
		return (0);
	return (c1[i] - c2[i]);
}
