/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 16:52:21 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/01 23:24:37 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The memchr() function scans the initial n bytes of the memory area
* pointed to by s for the first instance of c. Both c and the bytes of
* the memory area pointed to by s are interpreted as unsigned char.
* Return:
* The  memchr()  and memrchr() functions return a pointer to the matching
* byte or NULL if the character does not occur in the given memory area.
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	void	*retptr;

	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
		{
			retptr = (unsigned char *)s;
			return (retptr);
		}
		s++;
	}
	return (NULL);
}
