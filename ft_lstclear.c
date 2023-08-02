/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:54:27 by msarment          #+#    #+#             */
/*   Updated: 2023/08/02 12:05:38 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*n_next;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		n_next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = n_next; 
	}
	*lst = NULL;
}