/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftholoza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:33:12 by ftholoza          #+#    #+#             */
/*   Updated: 2023/11/12 14:53:12 by ftholoza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *) s;
	if (c == 0)
		return ((char *)(s + ft_strlen(s)));
	while (ptr[i])
	{
		if (ptr[i] == (char) c)
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    const char * source = "The C Language";
    char * destination;
    char * pointer;
    int length = strlen( source );

    destination = (char *) malloc( sizeof(const char) * (length+1) );
    strcpy( destination, source );

    while (pointer = ft_strchr( destination, 'a' ) ) {
        *pointer = 'A';
    }

    printf( "Result : %s\n", destination );

    free( destination );

    return 0;
}
*/
