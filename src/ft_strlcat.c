/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 18:03:42 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/01 23:25:11 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	size_t strlcat(char *dest, const char *src, size_t size);
* This function appends the null-terminated string src to the string dest,
* copying at most size-strlen(dest)-1 from src, and adds a terminating
* null byte to the result, unless size is less than strlen(dest). This
* function fixes the buffer overrun problem of strcat(), but the caller must
* still handle the possibility of data loss if size is too small. The
* function returns the length of the string  strlcat() tried to create;
* if the return value is greater than or equal to size, data loss occurred.
*/
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		dlen;

	d = dest;
	s = src;
	n = size;
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dest;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}
