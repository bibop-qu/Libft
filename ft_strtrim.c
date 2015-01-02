/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basle-qu <basle-qu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 18:01:50 by basle-qu          #+#    #+#             */
/*   Updated: 2015/01/02 15:13:35 by basle-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

static size_t		ft_strlen(const char *s)
{
	size_t		len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

static void			*ft_memalloc(size_t size)
{
	size_t		i;
	void		*new;

	i = 0;
	new = malloc(size);
	if (!new)
		return (0);
	while (i < size)
	{
		((char*)new)[i] = 0;
		i++;
	}
	return (new);
}

static char			*ft_strnew(size_t size)
{
	char	*new;

	new = (char*)ft_memalloc(size + 1);
	return (new);
}

char				*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		p;
	char	*str;

	i = 0;
	p = -1;
	if (!s)
		return (0);
	j = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	if (j < i)
	{
		str = (char*)malloc(1);
		str[0] = 0;
		return (str);
	}
	str = ft_strnew(j - i + 2);
	while (++p + i <= j)
		str[p] = ((char*)s)[p + i];
	str[j + 1] = 0;
	return (str);
}
