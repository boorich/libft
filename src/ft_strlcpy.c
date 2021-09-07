/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:27:12 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/07 22:20:49 by mmaurer          ###   ########.fr       */
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
1.	First, it checks if the destination buffer is NULL or the source string is
	NULL. If either of them is NULL, it returns 0.
2.	Next, it calculates the length of the source string.
3.	If the size of the destination buffer is greater than or equal to the length
	of the source string, it copies the source string to the destination buffer
	and adds a null character at the end of the string.
4.	If the size of the destination buffer is less than the length of the source	
	string, it copies the first size - 1 characters of the source string to the
	destination buffer and adds a null character at the end of the string.
5.	Finally, it returns the length of the source string.
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
