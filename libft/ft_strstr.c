/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 19:27:56 by jwu               #+#    #+#             */
/*   Updated: 2017/11/14 17:37:19 by jwu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str, const char *to_find)
{
	int		i;
	int		j;

	i = 0;
	if (str == to_find)
		return ((char *)str);
	if (str[i] != '\0' && *to_find == 0)
		return ((char *)str);
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			j++;
			if (to_find[j] == '\0')
				return ((char *)str + i);
		}
		i++;
	}
	return (0);
}
