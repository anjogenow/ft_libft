/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@stdent.42berlin.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:59:05 by agenow            #+#    #+#             */
/*   Updated: 2023/12/07 18:34:52 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_numlen(size_t n);

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	i;
	size_t	s;
	char	*num;

	len = ft_numlen(n);
	i = -1;
	s = 0;
	(void)num;
	if (n < 0)
	{
		s++;
		n = -n;
	}
	num = ft_calloc(s + len + 1, sizeof(int));
	if (!num)
		return (NULL);
	if (s == 1)
		num[0] = '-';
	while (++i < len)
	{
		num[len - i] = n % 10;
		n = n / 10;
	}
	return (num);
}

size_t	ft_numlen(size_t n)
{
	size_t	len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	len++;
	return (len);
}
