/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:08:51 by djin              #+#    #+#             */
/*   Updated: 2023/04/10 16:52:06 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int i;

	i = 1;
	while (nb > 0)
	{
		i = i * nb;
		nb --;
	}
	return (i);
}

int	main()
{
	printf("%d\n", ft_iterative_factorial(0));
}
