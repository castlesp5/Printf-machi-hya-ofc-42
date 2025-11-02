/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboujdad <iboujdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:28:05 by iboujdad          #+#    #+#             */
/*   Updated: 2025/10/30 09:28:10 by iboujdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libprintf.h"

int	ft_puthex2(unsigned long n, char *f)
{
	long	x;
	int		z;

	z = 0;
	if (n >= 16)
		z += ft_puthex2(n / 16, f);
	x = (n % 16);
	z += write(1, &f[x], 1);
	return (z);
}

int	ft_putptr(void *ptr)
{
	unsigned long	p;
	int				z;

	if (ptr == NULL)
	{
		z = write(1, "(nil)", 5);
		return (z);
	}
	p = (unsigned long)ptr;
	write(1, "0x", 2);
	z = ft_puthex2(p, "0123456789abcdef");
	return (z + 2);
}
