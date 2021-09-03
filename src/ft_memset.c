/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 14:37:12 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/01 23:24:58 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The memset() function fills the first n bytes of the memory area pointed to
* by s with the constant int c interpreted as a unsigned char.
*/
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*m;

	m = s;
	while (n)
	{
		*m = (unsigned char) c;
		m++;
		n--;
	}
	return (s);
}
