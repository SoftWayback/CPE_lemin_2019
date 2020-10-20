/*
** EPITECH PROJECT, 2020
** lem_in
** File description:
** lem_in
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen(char *str)
{
    int len = 0;

    while (str[len] != '\0')
    {
        len = len + 1;
    }
    return (len);
}

char *my_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i])
    {
        dest[i] = src[i++];
    }
    dest[i] = '\0';
    return (dest);
}

char *my_strdup(char *str)
{
    char *result;
    int	i;

    i = 0;
    result = malloc(sizeof(char) * (my_strlen(str) + 1));
    while (str[i])
    {
        result[i] = str[i];
        i++;
    }
    result[i] = 0;
    return (result);
}

void my_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}

int	my_putstr(char *str)
{
    while (*str != '\0')
    {
        my_putchar(*str);
        str++;
    }
    return 0;
}
