/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: maissam <marvin@42.fr>			    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2025/10/16 14:42:30 by maissam	       #+#    #+#	      */
/*   Updated: 2025/10/25 10:02:33 by maissam          ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		tlen;
	int		i;
	int		j;
	int		k;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	tlen = ft_strlen(s1) + ft_strlen (s2);
	new = malloc(sizeof(char) * tlen + 1);
	if (!new)
		return (NULL);
	i = 0;
	k = 0;
	while (s1[i] != '\0')
		new[i++] = s1[k++];
	j = 0;
	while (s2[j] != '\0')
		new[i++] = s2[j++];
	new[i] = '\0';
	return (new);
}
/*#include <stdio.h>
int main() {
    char *s1 = 0;
    char *s2 = 0;
    printf("%s",ft_strjoin(s1,s2));

    return 0;
}*/
