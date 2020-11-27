/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarciof <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:30:31 by tcarciof          #+#    #+#             */
/*   Updated: 2020/11/26 17:30:36 by tcarciof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	int_to_char(char c)
{
	c = c + 48;
	write(1, &c, 1);
}

int		check(int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
	}
	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	int		divider;
	int		is_nb_negative;
	int		first_result;
	int		checkflag;

	divider = 1000000000;
	is_nb_negative = 0;
	checkflag = check(nb);
	if (nb < 0)
	{
		nb *= -1;
	}
	while (divider >= 1)
	{
		if (nb / divider != 0)
		{
			first_result = 1;
		}
		if (first_result == 1 && checkflag == 0)
		{
			int_to_char(nb / divider);
			nb -= (nb / divider) * divider;
		}
		divider /= 10;
	}
}
