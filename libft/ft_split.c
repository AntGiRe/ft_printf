/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agil-rey <agil-rey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:49:50 by agil-rey          #+#    #+#             */
/*   Updated: 2022/10/13 12:45:09 by agil-rey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char c)
{
	int	flag;
	int	counter;

	counter = 0;
	flag = 0;
	while (*s != '\0')
	{
		if (*s != c && flag == 0)
		{
			counter++;
			flag++;
		}
		else if (*s == c)
		{
			flag = 0;
		}
		s++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char		**str;
	size_t		i;
	int			flag;
	int			counter;

	counter = 0;
	flag = -1;
	i = 0;
	str = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!s || !str)
		return (0);
	while (ft_strlen(s) >= i)
	{
		if ((s[i] == c || s[i] == '\0')
			&& (flag > 0 || (counter == 0 && flag != -1)))
		{
			str[counter++] = ft_substr(s, flag, i - flag);
			flag = -1;
		}
		else if (s[i] != c && flag == -1)
			flag = i;
		i++;
	}
	str[counter] = 0;
	return (str);
}
