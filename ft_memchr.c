/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@stdent.42berlin.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:27:15 by agenow            #+#    #+#             */
/*   Updated: 2023/12/06 21:01:16 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	cc;
	unsigned char	*str;
	size_t			i;

	i = 0;
	cc = (unsigned char) c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == cc)
			return ((void *) &s[i]);
		i++;
	}
	return (NULL);
}
