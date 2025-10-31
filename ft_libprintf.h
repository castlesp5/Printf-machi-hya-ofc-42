/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libprintf.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iboujdad <iboujdad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 08:29:44 by iboujdad          #+#    #+#             */
/*   Updated: 2025/10/30 08:31:20 by iboujdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBPRINTF_H

# define FT_LIBPRINTF_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_putuns(unsigned int n);
int		ft_printf(char *str, ...);
char	*ft_utoa(unsigned int n);
int		ft_puthex(unsigned long n, char *f);
int		ft_putptr(void *ptr);
int		ft_putnbr(int n);
int		ft_putchar(char c);
int		ft_putstr(char *s);
size_t	ft_strlen(char *str);
#endif // !
