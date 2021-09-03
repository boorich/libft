/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 18:45:32 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/03 22:24:41 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Allocates (with malloc(3)) and returns a newstring, which is the result of
* the concatenation of ’s1’ and ’s2’.
* Return: The new string. NULL if the allocation fails.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*j_str;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	j_str = malloc((s1_len + s2_len) * sizeof(char) + 1);
	if (!j_str)
		return (NULL);
	ft_strlcpy(j_str, (char *)s1, s1_len + 1);
	ft_strlcat(j_str, (char *)s2, (s1_len + s2_len + 1));
	return (j_str);
}
