/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayokota <nayokota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 17:59:52 by nayokota          #+#    #+#             */
/*   Updated: 2025/11/13 21:53:49 by nayokota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	int_len(long n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	size_t	len;
	char	*out;

	nb = (long)n;
	len = int_len(nb);
	out = (char *)malloc(len + 1);
	if (!out)
		return (NULL);
	out[len] = '\0';
	if (nb == 0)
		out[0] = '0';
	if (nb < 0)
	{
		out[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		out[--len] = (char)('0' + (nb % 10));
		nb /= 10;
	}
	return (out);
}

// #28
