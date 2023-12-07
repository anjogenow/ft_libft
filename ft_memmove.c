/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@stdent.42berlin.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:52:45 by agenow            #+#    #+#             */
/*   Updated: 2023/12/07 14:31:07 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*csrc;
	char	*cdst;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	csrc = (char *)src;
	cdst = (char *)dst;
	i = -1;
	if (cdst > csrc)
		while (len-- > 0)
			cdst[len] = csrc[len];
	else
	{
		while (++i < len)
			cdst[i] = csrc[i];
	}
	return (dst);
}
