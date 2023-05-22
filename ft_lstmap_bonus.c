/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 12:50:28 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/22 14:28:14 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*new_node;
	void	*aux;

	if (!lst || !f || !del)
		return (0);
	lst2 = 0;
	while (lst)
	{
		aux = f(lst->content);
		new_node = ft_lstnew(aux);
		if (!new_node)
		{
			free(aux);
			ft_lstclear(&lst2, del);
			return (0);
		}
		ft_lstadd_back(&lst2, new_node);
		lst = lst->next;
	}
	return (lst2);
}
