/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:57:26 by mvasquez          #+#    #+#             */
/*   Updated: 2021/09/30 07:57:24 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;
	int	i;

	i = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	n = nb;
	while (i < power)
	{
		n = n * nb;
		i ++;
	}
	return (n);
}
