/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarciof <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 12:00:52 by tcarciof          #+#    #+#             */
/*   Updated: 2020/11/27 12:07:02 by tcarciof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	out[5];
	int		dim;

	out[0] = '0' - 1;
	out[1] = '0';
	out[2] = '1';
	out[3] = ',';
	out[4] = ' ';
	dim = 0;
	while (out[0]++ <= '6')
	{
		while (out[1]++ <= '7')
		{
			while (out[2]++ <= '8' && dim++ < 119)
			{
				write(1, &out[0], 5);
			}
			out[2] = out[1] + 1;
		}
		out[1] = out[0] + 1;
		out[2] = out[1] + 1;
	}
	out[0]--;
	write(1, &out[0], 3);
}
