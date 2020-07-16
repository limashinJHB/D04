/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limashin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 09:11:30 by limashin          #+#    #+#             */
/*   Updated: 2020/07/16 09:49:43 by limashin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int ft_iterative_factorial(nb)
{
	int a;
	a = 2;
	while(nb == 0)
	{
		a = a*nb;
		nb--;
	}
	return a;
}
/*int main()
{
	printf("%d", ft_iterative_factorial(5));
	return 0;
}*/
