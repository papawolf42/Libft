/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 16:32:09 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/08 17:01:48 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

void	*memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);

size_t	ft_strlen(const char *s);

#endif
