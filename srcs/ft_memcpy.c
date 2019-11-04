/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 13:41:31 by vtenneke       #+#    #+#                */
/*   Updated: 2019/11/01 09:26:26 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*d;
	const char		*s;

	i = 0;
	d = dst;
	s = src;
	if (src == NULL && dst == NULL)
		return (NULL);
	if (src == NULL || dst == NULL)
		while (i)
			i++;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
