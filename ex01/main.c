/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrigarc <enrigarc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:22:55 by enrigarc          #+#    #+#             */
/*   Updated: 2023/09/15 20:28:51 by enrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	a;
	int	*********pa;
	int	********pb;
	int	*******pc;
	int	******pd;
	int	*****pe;
	int	****pf;
	int	***pg;
	int	**ph;
	int	*pi;

	a = 6455654;
	pa = &pb;
	pb = &pc;
	pc = &pd;
	pd = &pe;
	pe = &pf;
	pf = &pg;
	pg = &ph;
	ph = &pi;
	pi = &a;

	ft_ultimate_ft(pa);
	write(1, &(char){a / 10 + '0'}, 1);
	write(1, &(char){a % 10 + '0'}, 1);
	return (0);
}
