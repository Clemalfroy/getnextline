/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:46:32 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/11/07 19:49:58 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*trc;

	if (!s)
		return (NULL);
	i = 0;
	if ((trc = (char *)malloc(sizeof(char) * len + 1)) == NULL)
		return (NULL);
	while (i != len)
		trc[i++] = s[start++];
	trc[i] = '\0';
	return (trc);
}
