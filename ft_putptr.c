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
	z = ft_puthex(p, "0123456789abcdef");
	return (z + 2);
}
