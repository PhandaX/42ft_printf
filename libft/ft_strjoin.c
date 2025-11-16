/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayokota <nayokota@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 21:04:41 by nayokota          #+#    #+#             */
/*   Updated: 2025/11/12 00:15:10 by nayokota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*address;
	int		i;
	int		j;

	address = (char *)malloc(ft_strlen (s1) + ft_strlen (s2) + 1);
	if (!address)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		address[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		address[i] = s2[j];
		i++;
		j++;
	}
	address[i] = '\0';
	return (address);
}

//#25
// Allocates (with malloc(3)) and returns a new string,
// which is the result of the concatenation of ’s1’ and ’s2’.