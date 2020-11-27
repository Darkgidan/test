/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:01:11 by dmalori           #+#    #+#             */
/*   Updated: 2020/11/25 18:14:17 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	negative;
	int		div;
	int		flag;

	div = 100000000;
	flag = 0;
	negative = '-';
	if (nb < 0)
	{
		write(1, &negative, 1);
		nb *= -1;
	}
	while (div >= 1)
	{
		if (nb / div > 0)
		{
			flag = 1;
		}
		if (nb / div >= 0 && flag == 1)
		{
			ft_print(nb / div);
			nb -= (nb / div) * div;
		}
		div /= 10;
	}
}

void	ft_print(char c)
{
	c = c + 48;
	write(1, &c, 1);
}
