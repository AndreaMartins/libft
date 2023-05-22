/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:49:41 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/22 14:21:45 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*middleman;
	t_list	**node;

	node = lst;
	while (*node)
	{
		middleman = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = middleman;
	}
}
