/*
** EPITECH PROJECT, 2020
** lem_in
** File description:
** lem_in
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int not_an_comment(char *str)
{
    int i = 0;
    int hashtag = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '#')
        {
            hashtag++;
        }
    }
    return hashtag;
}

int find_tunnel(char *str)
{
    int i = 0;
    int score = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '-')
        {
            score++;
        }
    }
    return score;
}

int compt_word(char *str)
{
    int i = 0;
    int totalwords = 0;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        {
            totalwords++;
        }
    }
    return totalwords;
}
