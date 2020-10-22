/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 20:18:53 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/22 14:39:48 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_putnbr_fd_positive(size_t n, int fd)
{
	char	c;

	if (n)
	{
		ft_putnbr_fd_positive(n / 10, fd);
		c = n % 10 + '0';
		write(fd, &c, 1);
	}
}

void			ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;

	nbr = n;
	if (n == 0)
		write(fd, "0", 1);
	if (n < 0)
	{
		write(fd, "-", 1);
		nbr = n * -1;
	}
	ft_putnbr_fd_positive(nbr, fd);
}
