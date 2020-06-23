/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 12:34:02 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/23 12:02:03 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int ft_iterative_power(int nb, int power);


int ft_iterative_power(int nb, int power)
{
    int     result;

    result = 1;
    if ((nb == 0 && power !=0) || power < 0)
        return (0);
    if ((power == 0) || (( nb < 0) && (power == 0)))
        return (1);
    else
    {
        while (power > 0)
        {
            result =  nb * result;
            power--;
        }
        return (result);
    }
}

int main()
{
	printf("%d", ft_iterative_power(4, 2));
	return 0;
}


