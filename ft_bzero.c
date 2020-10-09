/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 21:52:11 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/09 23:11:13 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	char	*bowl;
	size_t	i;

	bowl = (char *)b;
	i = 0;
	while (i < len)
	{
		bowl[i] = 0;
		i++;
	}
}
