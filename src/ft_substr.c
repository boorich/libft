/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 15:30:08 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/03 17:56:47 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Allocates (with malloc(3)) and returns a substring from the string ’s’.
* The substring begins at index ’start’ and is of maximum size ’len’.
* Return: The substring. NULL if the allocation fails.
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
