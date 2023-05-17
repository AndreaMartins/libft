/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:27:15 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/17 17:02:31 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

static unsigned int	count_substr(char const *s, char c)
{
	unsigned int	i;
	unsigned int 	num;

	i = 0;
	num = 0;
	while (s)
	{
		while (s[i] != c)
		{
			i++;
		}
		num++;
		while (s[i+1] == c)
		{
			i++;
		}
	}
	return (num);
}

static char **allocate_substr(unsigned int num_substr)
{
	char	**allocated;

	allocated = (char **) malloc((num_substr + 1) * sizeof(char *));
	return (allocated);
}

static char **extract_substri(char **to_allocate, char *s, char c) 
{
	char 			*copy_s;
	unsigned int	sub_index;
	unsigned int	sub_len;
	unsigned int	sub_start;

	sub_index = 0;
	sub_len = 0;
	sub_start = 0;



}



char	**ft_split(char const *s, char c)
{
	unsigned int	num_substr;
	char	**to_allocate;
	char	**result;

	num_substr = count_substr(s, c);
	to_allocate = allocate_substr(num_substr);

	if (to_allocate == NULL)
		return (NULL);
	result = extract_subtr(to_allocate, s, c, num_substr);
	return (result);
	// number of substring	
	// allocate with number of substr
	// extract the substr
	// final substr null
}

int	main (int argc, char **argv)
{
	char *s;
	char c;
	char **result;
	int i;

	i = 0;
	if (argc != 3)
	{
		printf("error");
		return(1);
	}
	
	s = argv[1];
	c = argv[2][0];
	result = ft_split(s,c);

	if (result != NULL)
	{
		while (result[i] != 0)
		{
			printf("%s\n", result[i]);
			i++;
		}
	}	
	if (result != NULL)
	{
		while (result[i] != 0)
		{
			free(result);
		}
		free(result);
	}
	return (0);
}
