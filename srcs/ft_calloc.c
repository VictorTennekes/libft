/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 15:10:37 by vtenneke       #+#    #+#                */
/*   Updated: 2019/10/31 15:25:41 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*block;

	if (!(block = (void *)malloc(count * size)))
		return (NULL);
	ft_bzero(block, count * size);
	return (block);
}
