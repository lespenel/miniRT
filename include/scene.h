/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccouble <ccouble@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 20:28:38 by ccouble           #+#    #+#             */
/*   Updated: 2024/09/30 15:02:59 by lespenel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCENE_H
# define SCENE_H

# include <stdint.h>
# include "caustic.h"
# include "bvh.h"
# include "object/ambient_light.h"
# include "object/camera.h"
# include "vector.h"

typedef struct s_scene
{
	t_ambient_light		ambient_light;
	int					has_ambient_light;
	t_camera			camera;
	t_caustic			caustic;
	int					has_camera;
	t_vector			objects;
	t_vector			lights;
	t_vector			planes;
	t_bvh				bvh;
	char				*scene_name;
	t_color				background;
}	t_scene;

struct	s_engine;

int		init_scene(struct s_engine *engine, t_scene *scene, char *file);
void	init_object_vectors(t_scene *scene);
void	clear_objects_vectors(t_scene *scene);
void	clear_scene(t_scene *scene);
int		read_file(struct s_engine *engine, t_scene *scene, int fd);

#endif
