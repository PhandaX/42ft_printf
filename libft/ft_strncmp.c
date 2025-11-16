/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayokota <nayokota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:35:51 by nayokota          #+#    #+#             */
/*   Updated: 2025/11/13 16:16:36 by nayokota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n && p1[i] && p1[i] == p2[i])
		i++;
	if (i == n)
		return (0);
	return ((int)(p1[i] - p2[i]));
}

//#17
// Cast to const unsigned char* to compare bytes safely
//  (avoid signed char issues).