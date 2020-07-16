/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limashin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 13:51:08 by limashin          #+#    #+#             */
/*   Updated: 2020/07/16 15:44:13 by limashin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int ft_sqrt(int nb)
{
	int a;
	a = 1;

	while (a < nb)
		if (a * a == nb)
			return a;
		else
			a++;
	return 0;
}
/* to save time on the evaluation*/ 
/*int main()
{
	int nb;
	nb = 25;
	printf("%i\n", ft_sqrt(nb));
	return 0;
}*/
