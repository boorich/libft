/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:57:38 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/01 23:26:17 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* If c is a lowercase letter, tolower() returns its lowercase equivalent, if an
* lowercase representation exists in the current locale. Otherwise, it returns
* c. If c is a lowercase it works the other was around.
* If c is neither an unsigned char value nor EOF, the behavior of this
* function is undefined.
* RETURN VALUE: The value returned is that of the converted letter, or c if the
* conversion was not possible.
*/
int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + CASE_CONVERT);
	return (c);
}
