/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayokota <nayokota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 19:07:00 by nayokota          #+#    #+#             */
/*   Updated: 2025/11/12 22:34:55 by nayokota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d == s || len == 0)
		return (d);
	if (d > s)
	{
		i = len;
		while (i-- > 0)
			d[i] = s[i];
	}
	else
	{
		i = -1;
		while (++i < len)
			d[i] = s[i];
	}
	return (d);
}
//#10