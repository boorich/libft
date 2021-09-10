/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:06:21 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/07 22:22:30 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The strrchr() function returns a pointer to the last occurrence of the 
* character c in the string s.
1.	The ft_strrchr() function takes two arguments: a pointer to a string and a
	character.
2.	The while loop iterates over the string until it finds the character.
3.	If the character is found, the function returns a pointer to the character.
4.	If the character is not found, the function returns NULL.
5.	If the character is the null character, the function returns a pointer to
	the null character.
*/
char	*ft_strrchr(const char *s, int c)
{
	char	*m;

	m = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			m = ((char *)s);
		++s;
	}
	if (c == '\0')
		return ((char *)s);
	return (m);
}
