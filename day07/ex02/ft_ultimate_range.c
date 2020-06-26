/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 14:02:46 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/26 14:05:38 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main()
{
	int i;
	int j;
	int *r;
	int l;
	int index = 0;
	int **x;
	x = &r;
	i = 3;
	j = 7;
	l = ft_ultimate_range(x, i, j);
	while (index < 4)
	{
		printf("%d\n", r[index++]);
	}
	return 0;
}

int ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int length;
	int *table;
				
	if (max < min)
	{
		*range = NULL;
		return 0;
	}
	length = max - min;
	table = (int *)malloc(length*sizeof(int*));

	i = 0;
	while (min < max) table[i++] = min++;
	*range = table;
	return i;
}
