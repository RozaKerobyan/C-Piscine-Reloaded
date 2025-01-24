/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkerobya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:46:29 by rkerobya          #+#    #+#             */
/*   Updated: 2025/01/15 17:01:07 by rkerobya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*n;

	range = max - min;
	n = malloc(range * sizeof(int));
	if (!n)
	{
		return (0);
	}
	if (min >= max)
	{
		return (0);
	}
	i = 0;
	while (i < range)
	{
		n[i] = min + i;
		i++;
	}
	return (n);
}
/*
#include <stdio.h>

int main()
{
	int min = 8;
	int max = 16;
	int range = max - min;
	int i = 0;
	int *n = ft_range(min, max);

	while (i < range)
	{
		printf("%d\n", n[i]);
		i++;
	}
}
*/
