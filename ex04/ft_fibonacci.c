/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 10:41:22 by djin              #+#    #+#             */
/*   Updated: 2023/04/13 09:22:57 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_fibonacci(int index)
{	
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if ((index == 1) || (index == 2))
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*int	main(void)
{
	printf("%d\n", ft_fibonacci(3));
}*/
