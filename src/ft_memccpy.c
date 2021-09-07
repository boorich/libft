/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:30:26 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/07 21:40:51 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The memccpy() function copies no more than n bytes from memory area src
* to memory area dest, stopping when the character c is found.
* If the memory areas overlap, the results are undefined.
* The memccpy() function returns a pointer to the next character in  dest
* after c, or NULL if c was not found in the first n characters of src.
1.	The ft_memccpy() function takes in four arguments:
2.	a. dest: The destination buffer where the copied data is stored.
3.	b. src: The source buffer from which data is to be copied.
4.	c. c: The character to be searched.
5.	d. n: The number of bytes to be copied.
6.	The function returns a pointer to the byte in the destination buffer that
	matches the character c.
7.	The function first stores the value of c in the destination buffer.
8.	It then copies the data from the source buffer to the destination buffer.
9.	It then checks if the character c is present in the destination buffer.
10. If it is present, the function returns a pointer to the byte in the
	destination buffer that matches the character c.
11.	If it is not present, the function returns NULL.
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
