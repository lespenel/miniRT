/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sphere.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccouble <ccouble@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:38:55 by ccouble           #+#    #+#             */
/*   Updated: 2024/10/14 21:42:02 by ccouble          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPHERE_H
# define SPHERE_H

# include "color.h"
# include "vec3.h"

typedef struct s_sphere
{
	t_vec3			pos;
	double			diameter;
	double			radius;
	double			radiussq;
	t_color			color;
}	t_sphere;

struct	s_engine;
union	u_object_data;

int	parse_sphere(struct s_engine *engine, union u_object_data *object);

#endif
