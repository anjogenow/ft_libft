/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:51:26 by agenow            #+#    #+#             */
/*   Updated: 2023/12/04 13:58:30 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	d;

	d = (char) c;
	while(*s)
	{
		if (*s == d)
			return ((char *) s);
		s++;
	}
	if (*s == d)
		return ((char *) s);
	return (NULL);
}