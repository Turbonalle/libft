/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbagger <jbagger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 10:51:47 by jbagger           #+#    #+#             */
/*   Updated: 2022/11/30 08:09:00 by jbagger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	char	*new;
	int		i;

	s = (char *)s1;
	new = (char *)malloc(sizeof(*new) * (ft_strlen(s1) + 1));
	if (!new)
		return (NULL);
	i = 0;
	while (*s)
		new[i++] = *s++;
	new[i] = '\0';
	return (new);
}
