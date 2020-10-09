/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 16:32:09 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/09 17:41:27 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

void	*ft_memset(void *dest, int c, size_t len);
void	ft_bzero(void *b, size_t len);

size_t	ft_strlen(const char *s);

#endif
