/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 16:52:21 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/07 21:45:08 by mmaurer          ###   ########.fr       */
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
1.	The ft_memchr() function takes three arguments: a pointer to the memory area
	to search, the character to search for, and the number of bytes to search.
2.	The ft_memchr() function loops through the memory area until it finds the
	character or until it has searched all the bytes.
3.	If the character is found, the function returns a pointer to the character.
4.	If the character is not found, the function returns NULL.
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
