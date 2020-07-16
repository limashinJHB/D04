/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limashin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:54:08 by limashin          #+#    #+#             */
/*   Updated: 2020/07/16 13:49:34 by limashin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int ft_fibonacci(int index)
{
	if (index <= 1)
		return index;
	return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);

}
/* only for testing to save tim on the evaluation*/

/*int main()
{
	int index;
	index = 2;
	printf("%d\n",ft_fibonacci(index));
	return 0;
}*/
