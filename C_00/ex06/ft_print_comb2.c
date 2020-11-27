/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarciof <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 10:22:59 by tcarciof          #+#    #+#             */
/*   Updated: 2020/11/26 15:46:46 by tcarciof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fill_array(char *c)
{
	c[0] = '0';
	c[1] = '0';
	c[2] = ' ';
	c[3] = '0';
	c[4] = '1';
	c[5] = ',';
	c[6] = ' ';
}

void	check(char *c, int pos)
{
	if (c[pos] == ':' || c[pos] == ';')
	{
		c[pos] = '0';
		c[pos - 1]++;
	}
}

void	fill_array2(int *c)
{
	c[0] = 0;
	c[1] = 99;
	c[2] = 1;
	c[3] = 0;
}

void	ft_print_comb2(void)
{
	char	out[7];
	int		i[4];

	fill_array(out);
	fill_array2(i);
	while (i[1] > 0 && i[3] < 4949)
	{
		while (i[0] < i[1])
		{
			check(out, 1);
			check(out, 4);
			write(1, &out[0], 7);
			out[4]++;
			i[2] = 1;
			i[0]++;
			i[3]++;
		}
		out[3] = out[0];
		out[1]++;
		out[4] = out[1] + 1;
		i[1]--;
		i[0] = 0;
	}
	write(1, &out[0], 5);
}
