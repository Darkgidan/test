/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex0.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarciof <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 11:23:19 by tcarciof          #+#    #+#             */
/*   Updated: 2020/11/26 11:35:52 by tcarciof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
