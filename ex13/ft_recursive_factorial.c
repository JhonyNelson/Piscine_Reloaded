/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhcosta- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 19:17:43 by jhcosta-          #+#    #+#             */
/*   Updated: 2026/05/15 19:17:45 by jhcosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 12)
		return (0);
	if (nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/* void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nbr;

	nbr = nb;
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar(nbr % 10 + '0');
}

int	main(void)
{
	ft_putnbr(ft_recursive_factorial(13));
}
 */