/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:45:09 by jblaye            #+#    #+#             */
/*   Updated: 2024/02/19 12:28:30 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strappend(char *s1, char *s2)
{
	size_t	lens1;
	size_t	lens2;
	int		i;
	char	*r;

	i = 0;
	lens2 = 0;
	if (s2)
		lens2 = ft_strlen(s2);
	lens1 = ft_strlen(s1);
	r = (char *) malloc((lens1 + lens2 + 1) * sizeof(char));
	if (!r)
		return (0);
	while (s1[i] != 0)
	{
		r[i] = s1[i];
		i++;
	}
	while (s2[i - lens1] != 0)
	{
		r[i] = s2[i - lens1];
		i++;
	}
	r[i] = '\0';
	return (free(s1), r);
}
