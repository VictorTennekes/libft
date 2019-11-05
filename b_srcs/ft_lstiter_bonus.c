/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/05 08:43:39 by vtenneke       #+#    #+#                */
/*   Updated: 2019/11/05 14:10:44 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft_bonus.h>

void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	if (lst == 0)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
