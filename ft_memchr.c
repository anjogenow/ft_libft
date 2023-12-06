/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:27:15 by agenow            #+#    #+#             */
/*   Updated: 2023/12/06 10:39:33 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	cc;
	size_t			i;

	i = 0;
	cc = (unsigned char) c;
	while (i < n)
	{
		if ((unsigned char) s[i] == cc)
			return ((void *) &s[i]);
		i++;
	}
	return (NULL);
}
