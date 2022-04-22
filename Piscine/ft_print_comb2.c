/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:37:37 by mvasquez          #+#    #+#             */
/*   Updated: 2021/09/16 11:56:46 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	print_numero(int n)
{
	int	n1;
	int	n2;

	n1 = n / 10;
	n2 = n % 10;
	ft_putchar(n1 + 48);
	ft_putchar(n2 + 48);
}

void	ft_print_comb2(void)

{
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 0;
	while (n1 < 99)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			{
				print_numero(n1);
				write (1, " ", 1);
				print_numero(n2);
				if (n1 == 98 && n2 == 99)
					return ;
				write(1, ", ", 2);
			}
			n2++;
		}
		n1++;
	}
}
