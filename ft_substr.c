/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andmart2 <andmart2@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:23:48 by andmart2          #+#    #+#             */
/*   Updated: 2023/05/03 13:07:08 by andmart2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_substr(char const *s, unsigned int start, size_t len)
{

}

/*char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t s_len = 0;
    while (s[s_len])
        ++s_len;
    if (start >= s_len)
        return (NULL);
    if (s_len - start < len)
        len = s_len - start;
    char *substr = (char *)malloc((len + 1) * sizeof(char));
    if (!substr)
        return (NULL);
    for (size_t i = 0; i < len; ++i)
        substr[i] = s[start + i];
    substr[len] = '\0';
    return (substr);
}
int main()
{
    char *str = "0123456789";
    char *substr = ft_substr(str, 3, 4);
    printf("Original string: %s\n", str);
    printf("Substring: %s\n", substr);
    return 0;
}*/
