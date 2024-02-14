/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:19:52 by jblaye            #+#    #+#             */
/*   Updated: 2024/02/14 10:37:33 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_type(char c, va_list ap, int fd)
{
	int	count;

	count = 0;
	if (c == 'c')
		ft_putcharcount_fd(&count, va_arg(ap, int), fd);
	if (c == 's')
		ft_putstrcount_fd(&count, va_arg(ap, char *), fd);
	if (c == 'd' || c == 'i')
		ft_putnbrcount_fd(&count, va_arg(ap, int), fd);
	if (c == 'u')
		ft_putuicount_fd(&count, va_arg(ap, unsigned int), fd);
	if (c == 'x')
		ft_putnbrbasecount_fd(&count, va_arg(ap, unsigned int), fd);
	if (c == 'X')
		ft_putnbrupbasecount_fd(&count, va_arg(ap, unsigned int), fd);
	if (c == '%')
		ft_putcharcount_fd(&count, '%', fd);
	if (c == 'p')
		ft_putptrcount_fd(&count, va_arg(ap, unsigned long int), fd);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		nbc;

	if (!str)
		return (-1);
	va_start(ap, str);
	i = 0;
	nbc = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			nbc = nbc + print_type(str[i + 1], ap, 1);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			nbc++;
		}
		i++;
	}
	return (nbc);
}
