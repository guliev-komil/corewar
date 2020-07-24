/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   corewar.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcapers <dcapers@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 15:36:50 by dcapers           #+#    #+#             */
/*   Updated: 2020/07/24 18:18:09 by dcapers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COREWAR_H
# define COREWAR_H

# include <stdint.h>
# include "op.h"
# include "libft.h"
# include "player.h"

typedef struct s_vm				t_vm;
typedef struct s_cursor			t_cursor;

struct				s_vm
{
	uint8_t			arena[MEM_SIZE];
	uint8_t			players_num;
	t_player		players[4];
};

struct				s_cursor
{
	uint8_t			id;
	int32_t			regs[REG_NUMBER];
	t_player		*player;
};

#endif