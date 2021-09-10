/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 18:46:46 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/07 21:46:29 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The memcmp() function compares the first n bytes (each interpreted as
* unsigned char) of the memory areas s1 and s2.
* Return:
* The memcmp() function returns an integer less than, equal to, or greater than
* zero if the first n bytes of s1 is found, respectively, to be less than, to
* match, or be greater than the first n bytes of s2.
* For a nonzero return value, the sign is determined by the sign of the
* difference between the first pair of bytes (interpreted as unsigned char) that
* differ in s1 and s2.
* If n is zero, the return value is zero.
1.	The ft_memcmp() function takes three arguments: a pointer to the first byte
	of the first string, a pointer to the first byte of the second string, and
	the number of bytes to compare.
2.	The while loop is used to compare each byte of the two strings.
3.	The if statement checks to see if the current byte of the first string is
	not equal to the current byte of the second string.
4.	If the bytes are not equal, ft_memcmp() returns the difference between the
	two bytes.
5.	If the bytes are equal, ft_memcmp() continues to the next byte.
6	Once the end of the shortest string is reached, ft_memcmp() returns 0 if the
	two strings are equal or non-zero if they are not.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return ((*(unsigned char *)s1 - *(unsigned char *)s2));
		s1++;
		s2++;
	}
	return (0);
}
