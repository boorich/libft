/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 15:26:05 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/07 22:20:42 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The strnstr() function locates the first occurrence of the null-termi-
* nated string little in the string big, where not more than len characters
* are searched. Characters that appear after a `\0'	character are not
* searched. Since the strnstr() function is	a FreeBSD specific API,	it
* should only be used when portability is not a concern.
* Return:
* If little is an empty string, big is returned; if little occurs nowhere
* in big, NULL is returned; otherwise a pointer to the first character of
* the first occurrence of little is returned.
1.	First, it checks if the length of the little string is 0. If it is, then it
	returns the big string.
2.	If the length of the little string is not 0, then it checks if the length of
	the big string is less than the length of the little string. If it is, then
	it returns 0.
3.	If the length of the big string is greater than or equal to the length of
	the little string, then it checks if the first character of the big string
	matches the first character of the little string. If it does, then it checks
	if the rest of the little string matches the rest of the big string. If it
	does, then it returns the big string.
4.	If the first character of the big string does not match the first character
	of the little string, then it checks if the length of the big string is less
	than the length of the little string. If it is, then it returns 0.
5.	If the length of the big string is greater than or equal to the length of
	the little string, then it increments the big string and decrements the
	length of the big string.
6.	If the length of the big string is less than the length of the little
	string, then it returns 0.
*/
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	llittle;

	llittle = ft_strlen(little);
	if (llittle == 0)
		return ((char *)big);
	while (len && *big)
	{
		if (ft_strncmp(big, little, llittle) == 0)
			return ((char *)big);
		if (len <= llittle)
			break ;
		big++;
		len--;
	}
	return (0);
}
