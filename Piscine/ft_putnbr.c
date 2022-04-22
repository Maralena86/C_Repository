/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 14:44:49 by mvasquez          #+#    #+#             */
/*   Updated: 2021/09/16 13:03:23 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{	
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 10)
		ft_putchar(nb / 10);
		ft_putchar(nb % 10);
	else if ((nb >= 0) && (nb < 10)) 
		ft_putchar(nb + '0');
	else 
	{
	ft_putchar('-');
	ft_putchar(nb + '0' );
	}
}
int main()
{
	ft_putnbr(42);
	return (0);	
}
