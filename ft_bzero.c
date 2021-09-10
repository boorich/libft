/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:31:47 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/07 21:42:50 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The bzero() function erases the data in the n bytes of the memory
* starting at the location pointed to by s, by writing zeros (bytes containing
* '\0') to that area.
1.	The ft_bzero() function takes two arguments: a void pointer to the memory
	area to be modified and the size of the memory area.
2.	The ft_bzero() function first stores the address of the memory area in a
	char pointer.
3.	The while loop runs as long as n is greater than 0.
4.	The *cptr pointer is incremented by 1 and n is decremented by 1.
5.	The *cptr pointer is set to '\0' and the memory location pointed to by cptr
	is set to '\0'.
6.	The ft_bzero() function returns nothing.
*/
void	ft_bzero(void *s, size_t n)
{
	char	*cptr;

	cptr = s;
	while (n)
	{
		*cptr = '\0';
		cptr++;
		n--;
	}
}
