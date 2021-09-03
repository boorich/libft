/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:30:26 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/01 23:24:26 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The memccpy() function copies no more than n bytes from memory area src
	to memory area dest, stopping when the character c is found.
	If the memory areas overlap, the results are undefined.
	
	void *memccpy(void *dest, const void *src, int c, size_t n);

	The memccpy() function returns a pointer to the next character in  dest
	after c, or NULL if c was not found in the first n characters of src.
*/
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)

{
	unsigned char	*ptr;

	ptr = dest;
	while (n)
	{
		*ptr = *(unsigned char *)src;
		if (*ptr == (unsigned char)c)
			return (++ptr);
		++ptr;
		++src;
		--n;
	}
	return (NULL);
}
