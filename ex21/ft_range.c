/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhcosta- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 19:26:37 by jhcosta-          #+#    #+#             */
/*   Updated: 2026/05/20 19:26:39 by jhcosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*array;

	size = max - min;
	if (min >= max)
		return (NULL);
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

/* #include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

int	main(void)
{
	int	*array;
	int	i;
	int	min;
	int	max;
	int	size;

	min = 2;
	max = 5;
	i = 0;
	size = max - min;
	array = ft_range(min, max);
	while (i < size)
	{
		ft_putnbr(array[i]);
		i++;
	}
	ft_putchar('\n');
	free(array);
	return (0);
}
 */