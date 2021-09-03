/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:06:21 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/01 23:25:35 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The strrchr() function returns a pointer to the last occurrence of the 
* character c in the string s.
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
