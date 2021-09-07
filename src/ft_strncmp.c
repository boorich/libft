/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 15:35:22 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/07 22:11:46 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The strncmp function compares not more than n characters (characters that
* follow a null character are not compared) from the array pointed to by s1 to
* the array pointed to by s2.
* Parameters:
* s1 − This is the first string to be compared.
* s2 − This is the second string to be compared.
* n − The maximum number of characters to be compared.
* Return:
* Zero  <=  If s1 and s2 equal.
* Negative value of distance between ascii values <= The first character that
* does not match has a lower value in s1 than in s2.
* Positive value of distance between ascii values <= The first character that
* does not match has a greater value in s1 than in s2.
1.	The ft_strncmp() function takes two string parameters and a third parameter
	n.
2.	The function returns 0 if the two strings are identical, otherwise it
	returns the difference between the first two differing bytes (unsigned char)
		of the two strings.
3.	The while loop is used to compare the first n bytes of the two strings.
4.	If the two strings are identical, the loop will exit and the function will
	return 0.
5.	If the two strings are not identical, the loop will exit and the function
	will return the difference between the first two differing bytes of the two
	strings.
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 | *s2) && n--)
	{
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		s1++;
		s2++;
	}
	return (0);
}
