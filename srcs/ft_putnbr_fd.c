/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: vtenneke <vtenneke@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 13:52:27 by vtenneke       #+#    #+#                */
/*   Updated: 2019/11/04 13:58:38 by vtenneke      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_put_digit_fd(unsigned int nmb, int fd)
{
	if ((nmb / 10) > 0)
		ft_put_digit_fd(nmb / 10, fd);
	ft_putchar_fd((nmb % 10) + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int nmb;

	nmb = (unsigned int)n;
	if (n < 0 && (n = -n))
		ft_putchar_fd('-', fd);
	ft_put_digit_fd(n, fd);
}
