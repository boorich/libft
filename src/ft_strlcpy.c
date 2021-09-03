/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:27:12 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/01 23:25:15 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The strcpy() function copies the string pointed to by src, including
* the terminating null byte ('\0'), to the buffer pointed to by dest.
* The strncpy() function is similar, except that at most n bytes of src
* are copied.
* The strlcpy() function is like strncpy(), but copies at most size-1 bytes to
* dest, always adds a terminating null byte and does not pad destination with
* (further) null bytes.
*/
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	buf_len;
	size_t	src_len;

	if (!dest || !src)
		return (0);
	src_len = ft_strlen(src);
	if (size)
	{
		if (src_len >= size)
			buf_len = size - 1;
		else
			buf_len = src_len;
		ft_memcpy(dest, src, buf_len);
		dest[buf_len] = '\0';
	}
	return (src_len);
}
