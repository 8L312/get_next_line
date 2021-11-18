/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:51:32 by rmonney           #+#    #+#             */
/*   Updated: 2021/11/18 14:27:41 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*readsave(int fd, char *save)
{
	char	*buf;
	int		ret;

	buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	ret = 1;
	while (!(ft_strchr(save, '\n')) && ret != 0)
	{
		ret = (read(fd, buff, BUFFER_SIZE));
		if (ret == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[ret] = '\0';
		save = ft_strjoin(save, buff);
	}
	free(buff);
	return (save);
}

char	*getline(char *save)
{
	char	*line;
	int		i;

	i = 0;
	if (!save)
		return (NULL);
	while (save[i] != '\0' && save[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (save[i] != '\0' && save[i] != '\n')
		line[i++] = save[i++];
	if (save[i] == '\n')
		line[i++] = save[i++];
	line[i] = '\0';
	return (line);
}

AAA

char	*get_next_line(int fd)
{
	static char	*save;
	char		*line;

	save = readsave(int fd, save);
	line = getline(save);
	save = rest(save);
	return (line);
}