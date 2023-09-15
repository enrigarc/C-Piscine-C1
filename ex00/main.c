/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrigarc <enrigarc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:22:36 by enrigarc          #+#    #+#             */
/*   Updated: 2023/09/15 20:24:14 by enrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	*nbr;
	int	hi;

		hi = 1;
		nbr = &hi;
	ft_ft(nbr);
	write(1, &(char){hi / 10 + '0'}, 1);
	write(1, &(char){hi % 10 + '0'}, 1);
	return (0);
}
