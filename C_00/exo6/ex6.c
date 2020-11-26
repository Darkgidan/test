/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarciof <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 10:22:59 by tcarciof          #+#    #+#             */
/*   Updated: 2020/11/26 10:31:39 by tcarciof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char out[7];
	int i[3];

	out[0] = '0';
	out[1] = '0';
	out[2] = ' ';
	out[3] = '0';
	out[4] = '1';
	out[5] = ',';
	out[6] = ' ';
	i[0] = 0;
	i[1] = 99;
	i[2] = 1;
	while (i[1] > 0 && i[2] < 4500)
	{
		while (i[0] < i[1])
		{
			if (out[1] == ':')
			{
				out[1] = '0';
				out[0]++;
			}
			if (out[4] == ':' || out[4] == ';')
			{
				out[4] = '0';
				out[3]++;
			}
			write(1, &out[0], 7);
			out[4]++;
			i[2] = 1;
			i[0]++;
		}
		out[3] = out[0];
		out[1]++;
		out[4] = out[1] + 1;
		i[1]--;
		i[0] = 0;
	}
}

int	main (void)
{
	ft_print_comb2();
}