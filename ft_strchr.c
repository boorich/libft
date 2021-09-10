/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 20:54:53 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/07 22:02:12 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The strchr() function returns a pointer to the first occurrence of the
* character c in the string s.
* RETURN: The strchr() function return a pointer to the matched
* character or NULL if the character is not found. The terminating null byte is
* considered part of the string, so that if c is specified as '\0', these
* functions return a pointer to the terminator.
1.	The ft_strchr() function takes two arguments: a string and a character.
2.	The while loop runs as long as the character is not found in the string.
3.	The if statement checks if the character is found in the string.
4.	If the character is found, the function returns the address of the
	character.
5.	If the character is not found, the function returns NULL.
*/
char	*ft_strchr(const char *s, int c)
{
	while (*s != c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}
