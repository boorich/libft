/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:19:53 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/07 21:47:37 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The  memcpy() function copies n bytes from memory area src to memory
* area dest. The memory areas must not overlap. Use memmove(3) if the
* memory areas do overlap. The memcpy() function returns a pointer to dest.
1.	The function takes three arguments: a pointer to the destination, a pointer
	to the source, and a size_t value that specifies the number of bytes to
	copy.
2.	The function checks that the pointers are not null. If they are, it returns
	a null pointer.
3.	The function initializes two pointer variables with the values of the
	pointers to the source and destination.
4.	The while loop executes as long as n is greater than 0.
5.	The *dptr variable is set to the value of the *sptr variable.
6.	The sptr variable is incremented and the dptr variable is incremented.
7.	The n variable is decremented.
8.	The function returns the value of the dest pointer.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*sptr;
	char		*dptr;

	if (!dest && !src)
		return ((void *)0);
	sptr = (const char *)src;
	dptr = (char *)dest;
	while (n)
	{
		*dptr = *sptr;
		sptr++;
		dptr++;
		n--;
	}
	return (dest);
}
