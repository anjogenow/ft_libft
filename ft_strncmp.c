/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agenow <agenow@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:21:33 by agenow            #+#    #+#             */
/*   Updated: 2023/12/06 10:25:34 by agenow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        if ((unsigned char) s1[i] != (unsigned char) s2[i])
            return (((int) s1[i]) - ((int) s2[i]));
        i++;
    }
    return (0);
}