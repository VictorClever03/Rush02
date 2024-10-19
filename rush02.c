/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnanga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 10:29:06 by vnanga            #+#    #+#             */
/*   Updated: 2024/10/19 10:43:15 by vnanga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_error(void)
{
	write(1, "Error: dimensions must be positive\n", 36);
}

void	print_first_last_line(int x, char start, char middle)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			ft_putchar(start);
		else
			ft_putchar(middle);
		i++;
	}
	ft_putchar('\n');
}

void	print_middle_line(int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	rush02(int x, int y)
{
	int	j;

	if (x <= 0 || y <= 0)
	{
		print_error();
		return ;
	}
	j = 0;
	print_first_last_line(x, 'A', 'B');
	while (++j < y - 1)
		print_middle_line(x);
	if (y > 1)
		print_first_last_line(x, 'C', 'B');
}
