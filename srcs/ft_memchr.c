/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 16:30:55 by vtenneke       #+#    #+#                */
/*   Updated: 2019/10/30 16:55:18 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*ptr;
	const char	*src;

	i = 0;
	ptr = 0;
	src = s;
	while (i < n)
	{
		if (src[i] == c)
		{
			ptr = &src[i];
			break ;
		}
		i++;
	}
	return ((char*)ptr);
}
