/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limashin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 09:54:51 by limashin          #+#    #+#             */
/*   Updated: 2020/07/16 10:44:40 by limashin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int ft_iterative_power(int nb, int power)
{
	int a;
	a = 1;
	while(power > 0)
	{
		if (power & 1)
			a = a *nb;
		power = nb  >> 1;
		nb = nb * nb;
	}
	return a;
}
/*int main()
{
	int nb = 3;
	int power = 5;

	printf("Power is %d", ft_iterative_power(nb,power));
	return 0;
}*/
