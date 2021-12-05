/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrdouane <zrdouane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 17:15:03 by zrdouane          #+#    #+#             */
/*   Updated: 2021/11/29 17:28:14 by zrdouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*clr;

	if (!del || !lst)
		return ;
	while (*lst)
	{
		clr = *lst;
		*lst = (*lst)->next;
		del(clr->content);
		free(clr);
	}
}
