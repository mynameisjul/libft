/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:31:28 by jblaye            #+#    #+#             */
/*   Updated: 2024/01/17 11:32:21 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	*r;

	r = (char *) s;
	while (*r != 0)
	{
		if (*r == c % 256)
			return (r);
		r++;
	}
	if (*r == c)
	{
		return (r);
	}
	return (0);
}
