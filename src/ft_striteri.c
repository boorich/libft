/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 17:54:53 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/07 22:34:02 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Applies the function f to each character of the string passed as argument, and
* passing its indexas first argument.  Each character is passed by address to f
* to be modified if necessary.
1.	The ft_striteri() function takes two parameters: a string and a function
	pointer.
2.	The while loop iterates over the string.
3.	The f function pointer is called with two parameters: the index and the
	character at that index.
4.	The index is incremented.
5.	The function pointer is called again until the end of the string.
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
	return ;
}
