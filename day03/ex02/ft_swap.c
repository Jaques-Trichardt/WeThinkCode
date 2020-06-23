/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 14:30:45 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/22 14:45:00 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b);

void ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;	
}

int main()
{
	int a;
	int b;

	a = 5;
	b = 9;
	ft_swap(&a, &b);
	printf("a is now %d b is now %d", a, b);
	return 0;	
}
