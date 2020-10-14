/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 22:46:39 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/14 22:57:24 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*pointer;

	if (!(pointer = malloc(number * size)))
		return (NULL);
	ft_memset(pointer, 0, number * size);
	return (pointer);
}
