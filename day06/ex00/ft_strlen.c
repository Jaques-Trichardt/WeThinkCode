/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 15:32:10 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/25 13:51:41 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str);

int ft_strlen(char *str)
{
	int count;
	
	count = 0;

	while(*str != '\0')
	{
		count++;
	}
	return count;
}
