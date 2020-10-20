/*
** EPITECH PROJECT, 2020
** lem_in
** File description:
** lem_in
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/mylist.h"

int compt(char *str)
{
    int i = 0;
    int space = 0;

    for (i = 0; str[i] != '#'; i++) {
        if (str[i] != '#')
            space++;
    }
    space = space - 1;
    return space;
}

char truncate_string(char *str)
{
    int i = compt(str);
    char *cleaned[i];

    str[i] = '\n';
    str[i + 1] = '\0';
    cleaned == str;
    return cleaned;
}

int third_room_reader(ff_LIST_t *current)
{
    char *cleaned;

    if (compt_word(&current->string) == 4) {
        if (not_an_comment(&current->string) == 1) {
            cleaned == truncate_string(&current->string);
            rooms_charger(cleaned);
        }
    }
}

int second_room_reader(ff_LIST_t *current)
{
    if (compt_word(&current->string) == 1) {
        if (not_an_comment(&current->string) == 2) {
            if (my_strcmp(&current->string, "##start\n") == 0 ||
                my_strcmp(&current->string, "##end\n") == 0) {
                rooms_charger(&current->string);
            }
        }
    }
}

int first_room_reader(ff_LIST_t *current)
{
    static int rooms_trigger = 0;

    if (compt_word(&current->string) == 3) {
        if (not_an_comment(&current->string) == 0)
            rooms_charger(&current->string);
    }
    return 0;
}
