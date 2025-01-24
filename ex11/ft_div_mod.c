/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 17:10:41 by rkerobya          #+#    #+#             */
/*   Updated: 2025/01/08 17:16:47 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int main()
{
	int a;
	int b;
	int mod;
	int div;

	a = 16;
	b = 8;
	ft_div_mod(a, b, &div, &mod);
	printf("div = %d, mod = %d\n", div, mod);
	return (0);
}
*/
