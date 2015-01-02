/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basle-qu <basle-qu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/02 15:18:24 by basle-qu          #+#    #+#             */
/*   Updated: 2015/01/02 18:24:46 by basle-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static size_t		ft_strlen(const char *s)
{
	size_t		len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		c;
	size_t		i;
	size_t		j;

	c = 0;
	i = ft_strlen(dst);
	j = ft_strlen(src);
	if (size <= i)
		return (j + size);
	while ((i + c) < size - 1)
	{
		dst[i + c] = src[c];
		c++; 
	}
	dst[i + c] = '\0';
	return (i + j);
}
