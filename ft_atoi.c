/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: basle-qu <basle-qu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 09:44:47 by basle-qu          #+#    #+#             */
/*   Updated: 2015/01/02 16:33:52 by basle-qu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


static int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

static int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int				i;
	unsigned int	result;

	i = 0;
	result = 0;
	if (*str == '\033' || *str == '\200')
		return (0);
	while (!ft_isprint(*str) || *str == ' ')
		str++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_isdigit(str[i]))
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	if (str[0] == '-')
		result = -result;
	return (result);
}
