/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/28 15:07:54 by vtenneke       #+#    #+#                */
/*   Updated: 2019/11/05 14:10:31 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	int		i;

	tmp = NULL;
	i = 0;
	if (s == NULL)
		while (i)
			i++;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			tmp = (char*)&s[i];
		i++;
	}
	if (s[i] == (char)c)
		tmp = ((char *)&s[i]);
	return (tmp);
}
