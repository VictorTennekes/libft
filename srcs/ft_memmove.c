/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 15:11:09 by vtenneke       #+#    #+#                */
/*   Updated: 2019/11/04 14:46:11 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*res;
	const unsigned char	*str;

	res = dst;
	str = src;
	if (res < str)
	{
		i = 0;
		while (i < len)
		{
			res[i] = str[i];
			i++;
		}
	}
	else if (res > str)
	{
		i = len;
		while (i > 0)
		{
			res[i - 1] = str[i - 1];
			i--;
		}
	}
	return (dst);
}
