/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: made-alm <made-alm@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:35:18 by made-alm          #+#    #+#             */
/*   Updated: 2022/08/20 15:53:06 by made-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	t;

	t = '0';
	while (t <= '9')
	{
		write(1, &t, 1);
		t = t + 1;
	}
}
