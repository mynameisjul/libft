/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcharcount_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 09:50:16 by jblaye            #+#    #+#             */
/*   Updated: 2024/02/14 10:35:59 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putcharcount_fd(int *count, char c, int fd)
{
	write(fd, &c, 1);
	*count = *count + 1;
}
