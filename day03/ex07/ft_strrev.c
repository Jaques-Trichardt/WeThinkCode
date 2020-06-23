/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrichar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/20 15:39:29 by jtrichar          #+#    #+#             */
/*   Updated: 2020/06/22 14:47:05 by jtrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strrev(char *str);

char *ft_strrev(char *str)
{
	char t;
	int count;
	int j;

	count = 0;
	j = 0;
	while (*(str +count) != '\0')
	{
		count++
	}
	count--;
	while(j < count)
	{
		t = *(str + j);
		*(str + j) = *(str + count);
		*(str + count) = t;
		j++;
		count--;
	}
	return str;
	
}


