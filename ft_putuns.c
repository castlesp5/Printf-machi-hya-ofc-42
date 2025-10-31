/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboujdad <iboujdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 08:26:01 by iboujdad          #+#    #+#             */
/*   Updated: 2025/10/30 08:52:15 by iboujdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libprintf.h"

static int	numlen(unsigned int n)
{
	int	z;

	z = 0;
	while (n > 0)
	{
		z++;
		n = n / 10;
	}
	return (z);
}

char	*ft_utoa(unsigned int n)
{
	char	*x;
	int		l;

	l = numlen(n);
	x = malloc(sizeof(char) * (l + 1));
	if (!x)
		return (0);
	x[l--] = '\0';
	while (n > 0)
	{
		x[l] = n % 10 + '0';
		n = n / 10;
		l--;
	}
	return (x);
}

int	ft_putuns(unsigned int n)
{
	char	*x;
	int		z;

	z = 0;
	if (n == 0)
		z += write(1, "0", 1);
	else
	{
		x = ft_utoa(n);
		ft_putstr(x);
		z += ft_strlen(x);
		free(x);
	}
	return (z);
}
