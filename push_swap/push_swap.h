#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_stack
{
	int				value;
	int				index;
	int				cost_a;
	int				cost_b;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

typedef struct s_info
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		len_a;
	int		len_b;
	int		pivot;
	t_stack	*top_a;
	t_stack	*top_b;
	int		max;
}	t_info;

int	check_number(char *argv);
int	check_error(char **argv);
int	*check_for_duplicates(int *input, char **argv, int list_size);
int	is_ordenated(int input_len, int *input);
void	init_stacks(t_info *info);
void	create_stacks(int *a, int list_size, t_info *info);
void	find_max(t_info *info);
void	init_index(t_info *info);
void	case3(t_info *info);

#endif