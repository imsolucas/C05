/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:42:20 by djin              #+#    #+#             */
/*   Updated: 2023/04/10 17:14:44 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_iterative_power(int	nb, int	power)
{
	int	answer;

	answer = 1;
	if (power == 0)
		return (1);
	if (power > 0)
		while (power > 0)
		{
			answer = answer * nb;
			power--;
		}
	return (answer);
}

int	main()
{
	printf("%d\n", ft_iterative_power(-5,2));
}
