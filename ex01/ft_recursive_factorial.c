/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limashin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 07:48:46 by limashin          #+#    #+#             */
/*   Updated: 2020/07/16 09:03:49 by limashin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int ft_iterative_factorial(int nb)
{
	if(nb <=  1)
	{
		return 1 ;
	} 
		return nb * ft_iterative_factorial( nb - 1);	
}

/*only to test the programme */
/*int  main()
{
   int i = 3;
   printf("Factorial of %d is %d\n", i, ft_iterative_factorial(i));
   return 0;
}*/
