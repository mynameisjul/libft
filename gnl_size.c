/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblaye <jblaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 10:49:48 by jblaye            #+#    #+#             */
/*   Updated: 2024/02/08 11:31:14 by jblaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int	len(char *str)
// {
// 	int	len;

// 	len = 0;
// 	if (str)
// 	{
// 		while (str[len] != 0)
// 			len++;
// 	}
// 	return (len);
// }

// static t_line	ft_read_size(int fd, t_line line, int size)
// {
// 	ssize_t	i;

// 	i = 0;
// 	while (read(fd, line.rest, BUFFER_SIZE) > 0 && len(line.result) < size)
// 	{
// 		i = isinstr(line.rest, '\n');
// 		line.result = ft_strnjoin(line.result, line.rest, i + 1);
// 		line.rest = ft_endstr(line.rest, i + 1, BUFFER_SIZE);
// 		if (!line.rest || !line.result)
// 		{
// 			if (line.result)
// 				free(line.result);
// 			line.result = NULL;
// 			return (line);
// 		}
// 		if (i < BUFFER_SIZE)
// 			return (line);
// 	}
// 	if (read(fd, line.rest, BUFFER_SIZE) <= 0 && line.result[0] == 0)
// 	{
// 		free(line.result);
// 		line.result = NULL;
// 		return (line);
// 	}
// 	return (line);
// }

// static t_line get_end_of_line_size(int fd, char *tmp, int size_max)
// {
// 	t_line	line;
// 	ssize_t	i;

// 	line.result = (char *) ft_calloc(BUFFER_SIZE + 1, sizeof(char));
// 	line.rest = (char *) ft_calloc(BUFFER_SIZE + 1, sizeof(char));
// 	i = 0;
// 	if (tmp[0] != 0)
// 	{
// 		i = isinstr(tmp, '\n');
// 		line.result = ft_strnjoin(line.result, tmp, i + 1);
// 		if (!line.rest || !line.result)
// 		{
// 			if (line.result)
// 				free(line.result);
// 			line.result = NULL;
// 			return (line);
// 		}
// 		free(line.rest);
// 		line.rest = ft_endstrnomalloc(tmp, i + 1, BUFFER_SIZE);
// 		if (isinstr(line.result, '\n') < BUFFER_SIZE)
// 			return (line);
// 	}
// 	line = ft_read(fd, line);
// 	return (line);
// }

// char	*gnl_size(int fd, char **line, int size_max)
// {
// 	if (BUFFER_SIZE > size_max)
// 	{
// 		*line = NULL;
// 		return (*line);
// 	}

// }