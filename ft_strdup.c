/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 20:16:28 by rpandipe          #+#    #+#             */
/*   Updated: 2024/02/20 20:28:06 by rpandipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t		size;
	int			i;
	char		*dup;

	i = 0;
	size = ft_strlen((char *)s) + 1;
	dup = (char *)malloc(sizeof(char) * size);
	if (!dup)
		return (NULL);
	while (s[i] != 0)
	{
		dup[i] = s[i];
		i++;
	}
	dup [i] = 0;
	return (dup);
}
