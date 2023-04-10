/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 19:39:04 by djin              #+#    #+#             */
/*   Updated: 2023/04/10 20:27:13 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int ft_sqrt(int nb)
{
	int i;

	i = 1;
	while ((i * i <= nb))
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (i);
}

int	main(int	argc, char	**argv)
{
	int	answer;
	
	ft_sqrt(answer);
	answer = atoi(argv[1]);
	printf("%d\n", ft_sqrt(answer));
}
