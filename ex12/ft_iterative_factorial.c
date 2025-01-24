/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:17:48 by rkerobya          #+#    #+#             */
/*   Updated: 2025/01/11 18:39:21 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	while (nb < 0)
	{
		return (0);
	}
	return (result);
}
/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_iterative_factorial(5));
}
*/
