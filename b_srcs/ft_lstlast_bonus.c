/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 19:02:45 by vtenneke       #+#    #+#                */
/*   Updated: 2019/11/07 13:44:02 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft_bonus.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!(lst))
		return (0);
	if (lst)
		while (lst->next)
			lst = lst->next;
	return (lst);
}
