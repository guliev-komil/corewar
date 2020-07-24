/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcapers <dcapers@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 18:05:29 by dcapers           #+#    #+#             */
/*   Updated: 2020/07/24 18:10:52 by dcapers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_H
# define PLAYER_H

#include <stdint.h>

typedef struct			s_player
{
	uint8_t				id;
	char				*name;
	char				*comment;
	int32_t				code_size;
	uint8_t				*code;		
}						t_player;

#endif