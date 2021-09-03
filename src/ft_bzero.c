/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:31:47 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/01 23:23:40 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The  bzero()  function  erases  the  data  in the n bytes of the memory
* starting at the location pointed to by s, by writing zeros (bytes  containing
* '\0') to that area.
*/
void	ft_bzero(void *s, size_t n)
{
	char	*cptr;

	cptr = s;
	while (n)
	{
		*cptr = '\0';
		cptr++;
		n--;
	}
}
