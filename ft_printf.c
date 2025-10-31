/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboujdad <iboujdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 21:52:44 by iboujdad          #+#    #+#             */
/*   Updated: 2025/10/29 21:55:45 by iboujdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libprintf.h"
#include <stdarg.h>

static int	ft_format(va_list lst, char c)
{
	int	z;

	z = 0;
	if (c == 'd' || c == 'i')
		z += ft_putnbr(va_arg(lst, int));
	else if (c == 'c')
		z += ft_putchar(va_arg(lst, int));
	else if (c == 's')
		z += ft_putstr(va_arg(lst, char *));
	else if (c == 'u')
		z += ft_putuns(va_arg(lst, unsigned int));
	else if (c == 'x')
		z += ft_puthex(va_arg(lst, int), "0123456789abcdef");
	else if (c == 'X')
		z += ft_puthex(va_arg(lst, int), "0123456789ABCDEF");
	else if (c == 'p')
		z += ft_putptr(va_arg(lst, void *));
	else
		z += write(1, "%", 1);
	return (z);
}

int	ft_printf(char *str, ...)
{
	va_list	lst;
	int		i;
	int		z;

	va_start(lst, str);
	i = 0;
	z = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			z += ft_format(lst, str[i]);
			i++;
		}
		else
		{
			write(1, &str[i++], 1);
			z += 1;
		}
	}
	va_end(lst);
	return (z);
}
