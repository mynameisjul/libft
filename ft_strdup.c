/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:09:19 by jblaye            #+#    #+#             */
/*   Updated: 2024/02/12 15:10:00 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*r;
	size_t	lens;

	lens = 0;
	if(s)
		lens = ft_strlen(s);
	r = (char *) malloc (sizeof(char) * (lens + 1));
	if (!r || !s)
		return (0);
	while (*s != 0)
	{
		*r = *s;
		r++;
		s++;
	}
	*r = 0;
	return (r - lens);
}
