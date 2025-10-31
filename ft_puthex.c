/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboujdad <iboujdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 09:28:16 by iboujdad          #+#    #+#             */
/*   Updated: 2025/10/30 09:35:35 by iboujdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libprintf.h"

int	ft_puthex(unsigned long n, char *f)
{
	long	x;
	int		z;

	z = 0;
	if (n >= 16)
		z += ft_puthex(n / 16, f);
	x = (n % 16);
	z += write(1, &f[x], 1);
	return (z);
}
