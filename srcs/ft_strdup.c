/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/31 15:55:15 by vtenneke       #+#    #+#                */
/*   Updated: 2019/11/04 10:58:20 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <errno.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	unsigned char	*block;
	int				len;
	int				i;
	char			*str;

	len = 0;
	i = 0;
	while (s1[len])
		len++;
	if (!(block = (unsigned char*)ft_calloc(sizeof(char), len)))
		ENOMEM;
	else
	{
		str = (char*)malloc(len + 1);
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (0);
}
