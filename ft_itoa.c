/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 21:23:43 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/07 21:41:37 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Allocates (with malloc(3)) and returns a string representing the integer
* received as an argument. Negative numbers must be handled.
1.	First, we check if the number is negative. If it is, we store the sign in a
	variable and multiply the number by -1.
2.	We then calculate the number of digits in the number by calling the 
	count_digits function.
3.	We allocate memory for the string and store the pointer to the string in a
	variable.
4.	We then check if the number is negative. If it is, we store the sign in a
	variable and multiply the number by -1.
*/
static size_t	ft_count_digits(int n)
{
	size_t	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		++count;
	}
	while (n >= 10)
	{
		n /= 10;
		++count;
	}
	return (++count);
}

/*
1. First, we check if the number is the smallest negative number. If it is,
we return a string containing that number.
2. If it isn’t, we calculate the number of digits in the number.
3. We allocate memory for the string and set the pointer to the beginning
of the string.
4. If the number is negative, we add a minus sign to the string.
5. We set the pointer to the end of the string and decrement it by the number of
 digits.
6. We loop through the number, starting from the least significant digit.
7. We add each digit to the string and decrement the pointer.
8. We return the string.
*/
char	*ft_itoa(int n)
{
	int		nlen;
	char	*nstr;
	char	*rstr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nlen = ft_count_digits(n);
	nstr = malloc(sizeof(char) * nlen + 1);
	if (!nstr)
		return (NULL);
	rstr = nstr;
	if (n < 0)
	{
		*nstr = '-';
		n *= -1;
	}
	nstr += nlen;
	while (n >= 10)
	{
		nstr--;
		*nstr = ((n % 10) + '0');
		n /= 10;
	}
	*(--nstr) = (n % 10) + '0';
	return (rstr);
}
