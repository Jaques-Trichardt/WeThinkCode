/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 11:09:15 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/23 13:39:37 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int count;

	if (nb < 0)
		return (0);
	count = 1;
	while (nb >= 1)
	{
		count = count * nb;
		nb--;
	}
	return (count);
}

int main()
{
	printf("%d",ft_iterative_factorial(4));
	return 0;
}
