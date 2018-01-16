/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 21:34:52 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/11/10 08:03:45 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_create_tab(char const *str, int nb_word, int max_len_word,
		char c)
{
	char		**tab;
	int			i;
	int			j;
	int			k;

	if ((tab = (char**)malloc(sizeof(*tab) * nb_word + 1)) == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < nb_word && str[i])
	{
		k = 0;
		if ((tab[j] = (char*)malloc(sizeof(**tab) * max_len_word + 1)) == NULL)
			return (NULL);
		while (str[i] && (str[i] == c))
			i++;
		while (str[i] && str[i] != c)
		{
			tab[j][k] = str[i++];
			k++;
		}
		tab[j++][k] = '\0';
	}
	tab[j] = 0;
	return (tab);
}

char			**ft_strsplit(char const *str, char c)
{
	int			nb_word;
	int			len_word;
	int			max_len_word;
	int			i;

	if (!str || !c)
		return (NULL);
	nb_word = 0;
	max_len_word = 0;
	i = 0;
	while (str[i++])
	{
		len_word = 0;
		while (str[i] && (str[i] == c))
			i++;
		if (str[i] && str[i] != c)
		{
			nb_word++;
			while (str[i] && str[i] != c && str[i++])
				len_word++;
			if (len_word > max_len_word)
				max_len_word = len_word;
		}
	}
	return (ft_create_tab(str, nb_word, max_len_word, c));
}
