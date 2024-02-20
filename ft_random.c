/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_random.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 11:52:41 by jblaye            #+#    #+#             */
/*   Updated: 2024/02/20 16:03:06 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_rand(void)
{
	int		fd;
	char	buf[1];

	fd = open("/dev/random", O_RDONLY);
	if (fd < 0 || read(fd, buf, 1) < 0)
		return ((void)close(fd), -1);
	close(fd);
	return (buf[0]);
}

int	ft_rand_range(int range)
{
	int	nb;

	nb = ft_rand();
	if (range == 1)
		return (1);
	if (nb < 0)
		nb = -nb;
	while (nb > range)
		nb = nb / range;
	return (nb);
}
