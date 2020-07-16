/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limashin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 10:48:26 by limashin          #+#    #+#             */
/*   Updated: 2020/07/16 11:45:44 by limashin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int ft_recursive_power(int nb, int power)
{
	int a;

	if (power == 0)
	return 1;
	if (power % 2 == 0)
	{
		a = ft_recursive_power(nb, power / 2);
		return a * a;
	}
	else
		return nb * ft_recursive_power(nb, power - 1);
}
/*int main()
{
	int b;
	int c;
	b = 2;
	c = 3;
	printf("answer is: %d\n", ft_recursive_power(b, c));
    return 0;	
}*/
