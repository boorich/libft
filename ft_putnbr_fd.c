/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaurer <mmaurer@student.42wolfsburg.de>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 15:43:24 by mmaurer           #+#    #+#             */
/*   Updated: 2021/09/07 22:33:29 by mmaurer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
*	Outputs the integer ’n’ to the given filedescriptor.
1.	If n is equal to -2147483648, then we print out the negative sign, the
	letter ‘2’, and then the number 147483648.
2.	If n is less than 0, then we print out the negative sign and then
	recursively call ft_putnbr_fd to print out the positive number.
3.	If n is greater than 9, then we print out the number n/10 and then the
	number n%10.
4.	If n is less than 9, then we print out the number n.
*/
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
	return ;
}
