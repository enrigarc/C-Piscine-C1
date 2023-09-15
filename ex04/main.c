/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrigarc <enrigarc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:24:15 by enrigarc          #+#    #+#             */
/*   Updated: 2023/09/15 20:32:08 by enrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 2;
	b = 4;
	ft_ultimate_div_mod(&a, &b);
	write(1, &(char){a + '0'}, 1);
	write(1, &(char){b + '0'}, 1);
	return (0);
}
