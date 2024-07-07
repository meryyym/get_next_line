/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariama3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 19:53:24 by mariama3          #+#    #+#             */
/*   Updated: 2024/07/07 19:53:29 by mariama3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(char *str, int c)
{
	unsigned char	ch;

	if (!str)
		return (NULL);
	ch = (unsigned char)c;
	while (*str != ch && *str != '\0')
		str++;
	if (*str == ch)
		return ((char *)str);
	else
		return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*strcomplete;
	size_t	length;
	int		i;
	int		j;

	i = -1;
	j = 0;
	if (!s1)
	{
		s1 = malloc(sizeof(char));
		if (!s1)
			return (NULL);
		s1[0] = '\0';
	}
	length = ft_strlen(s1) + ft_strlen(s2) + 1;
	strcomplete = malloc(length);
	if (strcomplete == NULL)
		return (NULL);
	while (s1[++i] != '\0')
		strcomplete[i] = s1[i];
	while (s2[j] != '\0')
		strcomplete[i++] = s2[j++];
	strcomplete[i] = '\0';
	free(s1);
	return (strcomplete);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

