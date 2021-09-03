/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 11:49:52 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/01 23:25:07 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The strdup() function returns a pointer to a new string which is a duplicate
* of the string s. Memory for the new string is obtained with malloc(3), and
* can be freed with free(3).
* Return:
* On success, the strdup() function returns a pointer to the duplicated string.
* It returns NULL if insufficient memory was available, with errno set to
* indicate the cause of the error.
*/
char	*ft_strdup(const char *s)
{
	size_t	strlen;
	char	*dest;

	dest = malloc((ft_strlen(s) + 1));
	strlen = ft_strlen(s) + 1;
	if (dest != NULL)
	{
		ft_strlcpy(dest, s, strlen);
		return (dest);
	}
	else
		return (NULL);
}
