/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagger <jbagger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:50:12 by jbagger           #+#    #+#             */
/*   Updated: 2022/10/31 15:49:57 by jbagger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*ptr;

	len = ft_strlen(s);
	ptr = (char *)s + len;
	while (len >= 0)
	{
		if (*ptr == (unsigned char)c)
		{
			return (ptr);
		}
		ptr--;
		len--;
	}
	if (c == 0)
	{
		return (ptr);
	}
	return (NULL);
}
