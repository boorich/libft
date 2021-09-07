/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 14:37:12 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/07 21:57:59 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The memset() function fills the first n bytes of the memory area pointed to
* by s with the constant int c interpreted as a unsigned char.
*/
/*
1.	It takes three arguments: a pointer to a memory area, an int, and a size_t.
2.	It returns a pointer to the memory area that was passed to it.
3.	It sets the first n bytes of the memory area s to the value of c.
4.	It uses an unsigned char *m to iterate through the memory area s.
5.	It uses a while loop to iterate through the memory area s.
6.	It sets the value of m to the address of the next byte in the memory area s.
7.	It decrements n.
8.	It returns the memory area s.
*/
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*m;

	m = s;
	while (n)
	{
		*m = (unsigned char) c;
		m++;
		n--;
	}
	return (s);
}
