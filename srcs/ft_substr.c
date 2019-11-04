/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 09:11:59 by vtenneke       #+#    #+#                */
/*   Updated: 2019/11/04 13:14:17 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	void	*block;
	char	*dest;

	i = 0;
	if (s == 0)
		return (NULL);
	if (!(block = (void*)malloc(len + 1)))
		return (NULL);
	dest = (char*)malloc(len + 1);
	while (i < len)
	{
		dest[i] = s[start];
		start++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
