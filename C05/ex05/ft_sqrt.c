/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gicho <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 10:27:14 by gicho             #+#    #+#             */
/*   Updated: 2020/01/29 14:09:36 by gicho            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i * i < nb)
		++i;
	if (i * i == nb)
		return (i);
	return (0);
}