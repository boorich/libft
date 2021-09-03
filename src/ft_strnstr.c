/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 15:26:05 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/03 17:57:27 by mmaurer          ###   ########.fr       */
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
