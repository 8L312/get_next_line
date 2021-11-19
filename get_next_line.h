/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:40:21 by rmonney           #+#    #+#             */
/*   Updated: 2021/11/18 22:37:29 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stddef.h>

char	*get_next_line(int fd);
char	*readsave(int fd, char *save);
char	*get_line(char *save);
char	*rest(char *save);
size_t	ft_strlen(char *str);
char	*ft_strjoin(char *save, char *buff);
int		ft_strchr(char *s, int c);

#endif
