/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 09:46:05 by vtenneke       #+#    #+#                */
/*   Updated: 2019/11/04 10:57:03 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

static size_t	ft_dubstrlen(const char *str1, const char *str2)
{
	int len1;
	int len2;
	int totlen;

	len1 = 0;
	len2 = 0;
	while (str1[len1] != '\0')
	{
		len1++;
	}
	while (str2[len2] != '\0')
	{
		len2++;
	}
	totlen = len1 + len2;
	return (totlen);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	void	*block;
	char	*dest;
	size_t	i;
	size_t	k;

	k = 0;
	i = ft_dubstrlen(s1, s2);
	if (!(block = (void*)ft_calloc(sizeof(char), (i + 1))))
		return (NULL);
	dest = (char*)malloc(i + 1);
	i = 0;
	while (s1[k])
	{
		dest[k] = s1[k];
		k++;
	}
	while (s2[i])
	{
		dest[k] = s2[i];
		k++;
		i++;
	}
	dest[k] = '\0';
	return (dest);
}
