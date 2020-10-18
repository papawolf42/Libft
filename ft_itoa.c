/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 09:55:05 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/18 19:26:47 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getsize(int n)
{
	int		sign;
	int		digit;

	if (n == 0)
		return (1);
	sign = 0;
	if (n < 0)
		sign = 1;
	digit = 0;
	while (n)
	{
		n /= 10;
		digit++;
	}
	return (sign + digit);
}

char		*ft_itoa(int n)
{
	char			*str;
	int				sign;
	int				size;
	unsigned int	temp;

	sign = 0;
	size = ft_getsize(n);
	temp = n;
	if (!(str = (char *)ft_calloc(size + 1, sizeof(char))))
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		sign = 1;
		temp *= -1;
	}
	while (sign < size)
	{
		str[size - 1] = temp % 10 + '0';
		temp /= 10;
		size--;
	}
	return (str);
}
