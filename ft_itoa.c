/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhanda <mhanda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 04:52:36 by mhanda            #+#    #+#             */
/*   Updated: 2021/11/29 06:31:37 by mhanda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static size_t	ft_len(int index)
{
	int	len;

	len = 0;
	if (index <= 0)
	{
		len++;
	}
	while (index != 0)
	{
		len++;
		index = index / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	long	index;
	char	*str;

	len = ft_len(n);
	index = n;
	str = malloc(sizeof(char) * (len + 1));
	if (str == '\0')
		return (NULL);
	if (index < 0)
	{
		str[0] = '-';
		index = -index;
	}
	if (index == 0)
		str[0] = '0';
	str[len--] = '\0';
	while (index != 0)
	{
		str[len] = index % 10 + '0';
		len--;
		index = index / 10;
	}
	return (str);
}
