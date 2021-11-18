/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonney <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:53:45 by rmonney           #+#    #+#             */
/*   Updated: 2021/11/18 13:21:49 by rmonney          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	unsigned long	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned long	i;
	int				a;
	int				b;

	a = 0;
	b = 0;
	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	while (s1[a] != '\0')
	{
		str[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
		str[a++] = s2[b++];
	str[a] = '\0';
	return (str);
}

char	*ft_strchr(const char *s, int c)
{
	char	i;
	int		a;
	char	*sc;

	i = 0;
	a = 0;
	sc = NULL;
	i = (char)c;
	sc = (char *)s;
	while (sc[a] != i && sc[a] != '\0')
		a++;
	if (sc[a] == '\0' && c != '\0')
		return (NULL);
	else
		return (&sc[a]);
}
