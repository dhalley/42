/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabosse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 14:04:03 by dabosse           #+#    #+#             */
/*   Updated: 2019/06/08 21:00:42 by dabosse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_ultimate_div_mod(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}
