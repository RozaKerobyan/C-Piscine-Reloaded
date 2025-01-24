/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:42:59 by rkerobya          #+#    #+#             */
/*   Updated: 2025/01/11 15:35:52 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb > 1)
	{
		i *= nb * ft_recursive_factorial(nb - 1);
	}
	return (i);
}
/*
#include <stdio.h>

int main()
{
	printf("%d\n", ft_recursive_factorial(5));
}
*/
