/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpandipe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 09:43:19 by rpandipe          #+#    #+#             */
/*   Updated: 2024/02/21 13:14:51 by rpandipe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	slen;
	char			*ans;
	int				i;

	i = 0;
	slen = ft_strlen((char *)s);
	if (start > slen || !s)
		return (NULL);
	ans = (char *)malloc(sizeof(char) * len + 1);
	if (!ans)
		return (NULL);
	ft_strlcpy(ans, s + start, len + 1);
	return (ans);
}
