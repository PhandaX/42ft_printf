/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayokota <nayokota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:43:27 by nayokota          #+#    #+#             */
/*   Updated: 2025/11/13 21:47:03 by nayokota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

//#08
//20251108 OK
// size_t		i;
// unsigned char	*ptr;

// ptr = (unsigned char *)s;
// i = 0;
// while (i < size)
// {
// 	ptr[i] = 0;
// 	i++;
// }
// return
