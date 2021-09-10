/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-mou <ahel-mou@student-1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 13:29:14 by ahel-mou          #+#    #+#             */
/*   Updated: 2021/09/10 13:44:34 by ahel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int cara)
{
	if (cara >= 32 &&  cara < 128)
		return (1);
	else
		return (0);
}