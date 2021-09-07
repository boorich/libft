/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 20:56:42 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/07 22:20:47 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Applies the function ’f’ to each character of thestring ’s’ to create a new
* string (with malloc(3))resulting from successive applications of ’f’.
1.	It takes two parameters: a string and a function pointer.
2.	It allocates memory for a new string that is as long as the input string.
3.	It loops through the input string and calls the function pointer for each
	character.
4.	It returns the new string.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	new = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	while (s[i] != '\0')
	{
		new[i] = f((unsigned int)i, s[i]);
		++i;
	}
	new[i] = '\0';
	return (new);
}
