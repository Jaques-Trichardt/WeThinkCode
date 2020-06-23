/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 12:11:16 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/23 12:01:31 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	if(nb < 0)
		return(0);
	if(nb ==0 || nb == 1)
		return(1);
	return nb * ft_recursive_factorial(nb - 1);
}

int main()
{
	printf("%d", ft_recursive_factorial(4));
	return 0;
}

