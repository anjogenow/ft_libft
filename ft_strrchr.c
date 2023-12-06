/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@stdent.42berlin.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:59:43 by agenow            #+#    #+#             */
/*   Updated: 2023/12/06 20:40:27 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	d;
	char	*occur;

	occur = NULL;
	d = (char)c;
	while (*s)
	{
		if (*s == d)
			occur = (char *)s;
		s++;
	}
	if (*s == d)
		occur = (char *)s;
	return (occur);
}
