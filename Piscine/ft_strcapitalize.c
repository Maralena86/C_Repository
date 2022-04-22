/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 21:23:43 by mvasquez          #+#    #+#             */
/*   Updated: 2021/09/25 14:11:36 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_alphabet(char a)
{
	if (a > 64 || a < 91)
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
			i ++;
		}
		if (str[i - 1] == 32 || str[i - 1] == 45)
		{
			str[i] = str[i] - 32;
			i++;
		}
		i++;
	}
	return (str);
}
