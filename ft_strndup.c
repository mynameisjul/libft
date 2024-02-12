/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:25:07 by jblaye            #+#    #+#             */
/*   Updated: 2024/02/12 15:29:39 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, int size)
{
	char	*r;
	int		lens;
	int		i;

	i = 0;
	lens = 0;
	if(s)
		lens = ft_strlen(s);
	if (size < lens)
		lens = size;
	r = (char *) malloc (sizeof(char) * (lens + 1));
	if (!r || !s)
		return (0);
	while (i < lens)
	{
		r[i] = s[i];
		i++;
	}
	r[i] = 0;
	return (r);
}
