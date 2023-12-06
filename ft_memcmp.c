/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:40:35 by agenow            #+#    #+#             */
/*   Updated: 2023/12/06 10:45:36 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char) s1;
	str2 = (unsigned char) s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (((int) str1[i]) - ((int) str2[i]));
		i++;
	}
	return (0);
}
