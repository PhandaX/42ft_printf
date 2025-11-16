/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayokota <nayokota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 20:43:05 by nayokota          #+#    #+#             */
/*   Updated: 2025/11/12 22:34:55 by nayokota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*address;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	address = (char *)malloc(len + 1);
	if (!address)
		return (NULL);
	i = 0;
	while (i < len)
	{
		address[i] = s[i];
		i++;
	}
	address[i] = '\0';
	return (address);
}
