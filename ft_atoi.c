/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 19:20:15 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/18 23:53:25 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	unsigned long long	result;
	int					sign;

	result = 0;
	sign = 1;
	while ((9 <= *nptr && *nptr <= 13) || *nptr == ' ')
		nptr++;
	if (*nptr == '-')
		sign *= -1;
	if (*nptr == '+' || *nptr == '-')
		nptr++;
	while ('0' <= *nptr && *nptr <= '9')
	{
		result = result * 10 + *nptr - '0';
		nptr++;
	}
	if (result >= (unsigned long long)LONG_MAX && sign == 1)
		return (-1);
	else if (result >= (unsigned long long)LONG_MIN && sign == -1)
		return (0);
	return (sign * result);
}
