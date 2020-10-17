/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 20:18:53 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/17 21:44:31 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_putnbr_fd_positive(size_t n, int fd)
{
	char	rest;

	if (n)
	{
		ft_putnbr_fd_positive(n / 10, fd);
		rest = n % 10 + '0';
		write(fd, &rest, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	n_positive;
	
	n_positive = n;
	if (n == 0)
		write(fd, "0", 1);
	if (n < 0)
	{
		write(fd, "-", 1);
		n_positive = -1 * n;
	}
	ft_putnbr_fd_positive(n_positive, fd);
}
