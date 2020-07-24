/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcapers <dcapers@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 18:11:45 by dcapers           #+#    #+#             */
/*   Updated: 2020/07/24 18:16:54 by dcapers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATION_H
# define OPERATION_H

# include "corewar.h"

typedef struct				s_op
{
	char			*name;
	uint8_t			code;
	uint8_t			args_cnt;
	uint8_t			args_tcode;
	uint8_t			args_types[3];
	void			(*handle)(t_vm *, t_cursor *);
}							t_op;

#endif