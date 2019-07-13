/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabosse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 21:30:19 by dabosse           #+#    #+#             */
/*   Updated: 2019/06/10 12:20:36 by dabosse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_str_is_numeric(char *str)
{
	int i;
	int b;

	i = 0;
	b = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			b++;
		}
		i++;
	}
	if (i == b || str[0] == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
