/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 14:27:00 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/22 14:44:36 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_ultimate_ft(int *********nbr);

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main()
{
	int a;
	int *ptr;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;
	
	ptr = &a;
	ptr2 = &ptr;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
  	ptr6 = &ptr5;
  	ptr7 = &ptr6;
  	ptr8 = &ptr7;
  	ptr9 = &ptr8;

	ft_ultimate_ft(ptr9);
	printf("%d", *********ptr9);

	return 0;

}

