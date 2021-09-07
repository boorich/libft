/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:30:08 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/07 22:33:12 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Allocates (with malloc(3)) and returns a substring from the string ’s’.
* The substring begins at index ’start’ and is of maximum size ’len’.
* Return: The substring. NULL if the allocation fails.
1.	The ft_substr() function takes a string, a starting index, and a length.
2.	It allocates memory for a string of length characters and copies the
	substring starting at index start to the newly allocated memory.
4.	It returns the newly allocated string.
5.	If the allocation of s or m failed, it returns NULL.
6.	The ft_calloc() function takes the size of the memory block to be allocated
	and the number of bytes to be allocated for each character.
8.	It allocates memory for the string and returns a pointer to the newly
	allocated memory.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*m;

	m = ft_calloc(sizeof(char), len + 1);
	if (!m || !s)
		return (NULL);
	else if (start >= ft_strlen(s))
		return (m);
	ft_strlcpy(m, (char *)(s + start), len + 1);
	return (m);
}
