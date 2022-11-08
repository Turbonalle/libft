/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagger <jbagger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:40:11 by jbagger           #+#    #+#             */
/*   Updated: 2022/11/08 13:09:40 by jbagger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	int_length(long int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		nb = -nb;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*make_space_add_null(int n, int length)
{
	char	*str;

	if (n == 0)
	{
		str = (char *)malloc(sizeof(char) * (length + 2));
		if (!str)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
	}
	else
	{
		str = (char *)malloc(sizeof(char) * (length + 1));
		if (!str)
			return (NULL);
		str[length] = '\0';
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		length;
	char	*str;
	int		sign;

	length = (long)(int_length(n));
	str = make_space_add_null(n, length);
	if (!str)
		return (NULL);
	sign = 1;
	if (n < 0)
	{
		str[0] = '-';
		sign = -1;
	}
	length--;
	while (n != 0)
	{
		str[length] = (n % 10) * sign + '0';
		n = n / 10;
		length--;
	}
	return (str);
}
