/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:38:57 by rpandipe          #+#    #+#             */
/*   Updated: 2024/02/20 17:10:55 by rpandipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;
	size_t	i;

	src = s;
	i = 0;
	while (i < n)
	{
		if (src[i] == (unsigned char)c)
			return ((void *) (src + i));
		i++;
	}
	return (NULL);
}
