/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:49:09 by agenow            #+#    #+#             */
/*   Updated: 2023/12/06 11:01:11 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	(void) j;
	if (!needle)
		return ((char) haystack);
	while (i < len)
	{
		j = i;
		while (haystack[j] == needle[i - j] && j < len)
		{
			j++;
			if (needle[i - j] == '\0')
				return ((char *) &haystack[i]);
		}
		i++:
	}
	return (NULL);
}
