/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 09:19:45 by vtenneke       #+#    #+#                */
/*   Updated: 2019/11/05 11:23:02 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft_bonus.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*res;
	t_list	*new;
	void	*content;

	if (lst == 0)
		return (NULL);
	res = NULL;
	while (lst)
	{
		content = f(lst);
		if (!content)
			del(lst);
		new = ft_lstnew(content);
		ft_lstadd_back(&res, new);
		lst = lst->next;
	}
	return (res);
}
