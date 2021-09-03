/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 19:40:49 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/01 23:25:45 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* #1. The string to be trimmed.
* #2. The reference set of characters to trim.
* The trimmed string. NULL if the allocation fails.
* Allocates (with malloc(3)) and returns a copy of
* ’s1’ with the characters specified in ’set’ removed
* from the beginning and the end of the string.
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	char	*s2;
	size_t	start;
	size_t	end;
	size_t	buf_size;

	s2 = (char *)s1;
	result = 0;
	if (s1 != 0 && set != 0)
	{
		start = 0;
		end = ft_strlen(s1);
		while (s1[start] && ft_strchr(set, s1[start]))
			++start;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
			--end;
		buf_size = end - start + 1;
		result = (char *)malloc(sizeof(char) * (buf_size));
		if (result)
			ft_strlcpy(result, &s2[start], (buf_size));
	}
	return (result);
}
