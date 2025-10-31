/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboujdad <iboujdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:32:00 by iboujdad          #+#    #+#             */
/*   Updated: 2025/10/21 16:40:38 by iboujdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libprintf.h"

int	ft_putnbr(int n)
{
	long	nb;
	char	x;
	int		z;

	nb = (long)n;
	z = 0;
	if (nb < 0)
	{
		z += write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		z += ft_putnbr(nb / 10);
	}
	x = (nb % 10) + '0';
	z += write(1, &x, 1);
	return (z);
}
