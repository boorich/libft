/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:19:53 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/01 23:24:47 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The  memcpy() function copies n bytes from memory area src to memory
* area dest. The memory areas must not overlap. Use memmove(3) if the
* memory areas do overlap. The memcpy() function returns a pointer to dest.
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
