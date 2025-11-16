/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nayokota <nayokota@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:23:41 by nayokota          #+#    #+#             */
/*   Updated: 2025/11/16 17:06:40 by nayokota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINTF_H
# define FTPRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>

void va_start(va_list ap, last);
type va_arg(va_list ap, type);
void va_copy(va_list dest, va_list src);
void va_end(va_list ap);


int	printf(const char *restrictformat, ...);


#endif

// # include <stdarg.h> /* for va_start, va_arg, va_arg, va_end*/
// # include <stddef.h> /* for size_t, NULL */
// # include <stdlib.h> /* for malloc, free */
// # include <unistd.h> /* for write */
// # include <stdint.h> /* for MAX */