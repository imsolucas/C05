/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:17:43 by djin              #+#    #+#             */
/*   Updated: 2023/04/13 22:20:09 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
	return (nb);
}

/*int	main(void)
{
	printf("%d\n", ft_recursive_factorial(3));
}*/
