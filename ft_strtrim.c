/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@stdent.42berlin.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:42:00 by agenow            #+#    #+#             */
/*   Updated: 2023/12/12 15:35:02 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[ft_strlen(s1) - j - 1]))
		j++;
	return (ft_substr(s1, i, ft_strlen(s1) - i - j));
}
