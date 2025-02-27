/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divide_line.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccouble <ccouble@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 03:22:54 by ccouble           #+#    #+#             */
/*   Updated: 2024/07/19 03:24:02 by ccouble          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mat4.h"

void	divide_line(t_mat4 *mat, int k, double value)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		mat->matrix[k * 4 + i] /= value;
		++i;
	}
}
