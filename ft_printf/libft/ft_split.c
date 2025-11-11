/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: maissam <marvin@42.fr>			    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2025/10/17 09:03:47 by maissam	       #+#    #+#	      */
/*   Updated: 2025/10/29 11:39:06 by maissam          ###   ########.fr       */
/*									      */
/* ************************************************************************** */
#include "libft.h"

static int	ft_word_count(const char *s, char c)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			word_count++;
		}
		i++;
	}
	return (word_count);
}

static char	**freemem(char **s)
{
	int	i;

	i = 0;
	while (s[i] != NULL)
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

static char	**fill(char **split_array, const char *s, int word_count, char c)
{
	int	i;
	int	j;
	int	word_len;

	word_len = 0;
	i = 0;
	j = 0;
	while (j < word_count)
	{
		word_len = 0;
		while (s[i] != '\0' && s[i] == c)
			i++;
		while (s[i + word_len] != '\0' && s[i + word_len] != c)
			word_len++;
		split_array[j] = ft_substr(s, i, word_len);
		if (!split_array[j])
		{
			return (freemem(split_array));
		}
		i = i + ft_strlen(split_array[j]);
		j++;
	}
	split_array[j] = NULL;
	return (split_array);
}

char	**ft_split(char const *s, char c)
{
	char	**split_array;
	int		word_count;

	if (!s)
	{
		return (NULL);
	}
	word_count = ft_word_count(s, c);
	split_array = malloc(sizeof(char *) * (word_count + 1));
	if (!split_array)
	{
		return (NULL);
	}
	return (fill(split_array, s, word_count, c));
}

/*int	main(void)
{
	char	*s = "hellno,,,,,, oh forgot i can't type them uhmm comma";
	char c = ',';
	int i = 0;
	char **array = ft_split(s,c);
	while(array[i] != NULL)
	{
		printf("%s",array[i]);
		i++;
	}

	return 0;
}*/
