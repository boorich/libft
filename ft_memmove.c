/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:19:04 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/07 21:49:41 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The memmove() function copies n bytes from memory area src to memory area
* dest. The memory areas may overlap: copying takes place as though the bytes in
* src are first copied into a temporary array that does not overlap src or dest,
* and the bytes are then copied from the temporary array to dest. The memmove()
* function returns a pointer to dest.
* memcpy if dest has enough space (dest-src >= n)
* otherwise a reverse write [dest <<< src] from position n to 0.
1.	First, it checks if the source and destination pointers are NULL. If they
	are, it returns NULL.
2.	If the source and destination pointers are not NULL, it checks if the source
	and destination pointers are the same. If they are, it returns the
	destination pointer.
3.	If the source and destination pointers are not the same, it checks if the
	source and destination pointers are separated by a distance greater than or
	equal to the size of the object. If they are, it calls the memcpy() function
	to copy the object.
4.	If the source and destination pointers are not separated by a distance
	greater than or equal to the size of the object, it copies the object byte
	by byte.
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if ((size_t)(dest - src) >= n)
		return (ft_memcpy(dest, src, n));
	while (n--)
		*((unsigned char *)dest + n) = *((unsigned char *)src + n);
	return (dest);
}
