/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 03:35:41 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/15 04:03:20 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*strjoin;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (!(strjoin = (char *)malloc(sizeof(char) * (len1 + len2 + 1))))
		return (NULL);
	strjoin[0] = 0;
	ft_strlcpy(strjoin, s1, len1 + 1);
	ft_strlcpy(strjoin + len1, s2, len2 + 1);
	return (strjoin);
}
