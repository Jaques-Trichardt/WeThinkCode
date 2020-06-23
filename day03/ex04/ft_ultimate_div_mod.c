/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 15:00:01 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/22 14:45:44 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

void ft_ultimate_div_mod(int *a, int *b)
{
	int place_holder_a;
	int place_holder_b;

	place_holder_a = *a;
	place_holder_b = *b;

	*a = place_holder_a / place_holder_b;
	*b = place_holder_a % place_holder_b;
}

int main()
{
	int a;
	int b;

	a = 5;
	b = 10;

	ft_ultimate_div_mod(&a, &b);
	printf("a is %d and b is %d", a, b);
	return 0;	
}
