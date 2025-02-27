/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   obj_mtl.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccouble <ccouble@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 01:28:02 by ccouble           #+#    #+#             */
/*   Updated: 2024/10/13 03:24:10 by lespenel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OBJ_MTL_H
# define OBJ_MTL_H

# include "vector.h"

typedef struct s_obj_mtl
{
	char		*file_name;
	t_vector	materials;
}	t_obj_mtl;

typedef enum e_mtl_line_type
{
	NEWMTL,
	KA,
	KD,
	KS,
	TF,
	ILLUM,
	DISSOLVE,
	NS,
	NI,
	MAP_BUMP,
	MAP_KD,
	REFLECTION,
	REFRACTION,
	REFRACTION_BLEND
}	t_mtl_line_type;

struct	s_engine;
struct	s_option;

int			parse_mtl_file(struct s_engine *engine, t_obj_mtl *mtl, char *file);
t_obj_mtl	*parse_obj_mtl_if_needed(struct s_engine *engine, char *file);
void		clear_mtl(t_obj_mtl *mtl);
void		clear_mtls(t_vector *mtls);
int			parse_newmtl(struct s_engine *engine, t_obj_mtl *mtl, char *line);
int			parse_kd(struct s_engine *engine, t_obj_mtl *mtl, char *line);
int			parse_ks(struct s_engine *engine, t_obj_mtl *mtl, char *line);
int			parse_ns(struct s_engine *engine, t_obj_mtl *mtl, char *line);
int			parse_ni(struct s_engine *engine, t_obj_mtl *mtl, char *line);
int			parse_map_bump(struct s_engine *engine, t_obj_mtl *mtl, char *line);
int			parse_map_kd(struct s_engine *engine, t_obj_mtl *mtl, char *line);
int			parse_reflection(struct s_engine *engine, t_obj_mtl *mtl, char *s);
int			parse_refraction(struct s_engine *engine, t_obj_mtl *mtl, char *s);
int			parse_refraction_blend(struct s_engine *e, t_obj_mtl *m, char *s);

#endif
