/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gunkim <papawolf@kakao.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 11:50:04 by gunkim            #+#    #+#             */
/*   Updated: 2020/10/18 19:24:01 by gunkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_first;
	t_list	*lst_map;
	t_list	*lst_new;

	if (!lst)
		return (NULL);
	if (!(lst_new = ft_lstnew(f(lst->content))))
		return (NULL);
	lst_first = lst_new;
	lst_map = lst_first;
	lst = lst->next;
	while (lst)
	{
		if (!(lst_new = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&lst_first, del);
			return (NULL);
		}
		lst_map->next = lst_new;
		lst_map = lst_map->next;
		lst = lst->next;
	}
	return (lst_first);
}
