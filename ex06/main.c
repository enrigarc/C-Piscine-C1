/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrigarc <enrigarc@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:24:48 by enrigarc          #+#    #+#             */
/*   Updated: 2023/09/15 20:38:36 by enrigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;
	int		lt;

	str = "hola";
	lt = ft_strlen(str);
	write(1, &(char){lt + '0'}, 1);
	return (0);
}
