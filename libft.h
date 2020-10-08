/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 16:32:09 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/08 16:50:29 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>


void	*memset(void *b, int c, size_t len);
void	bzero(void *s, size_t n);

size_t	strlen(const char *s);

#endif
