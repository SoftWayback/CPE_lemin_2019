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

int comments_reader(ff_LIST_t *current)
{
    if (not_an_comment(&current->string) != 0)
        comments_charger(&current->string);
    return 0;
}

int tunnels_reader(ff_LIST_t *current)
{
    static int tunnel_trigger = 0;

    if (compt_word(&current->string) == 1) {
        if (find_tunnel(&current->string) == 1) {
            tunnels_charger(&current->string, tunnel_trigger);
            tunnel_trigger++;
        }
    }
    return 0;
}

int ants_reader(ff_LIST_t *current)
{
    static int ants_trigger = 0;

    if (not_an_comment(&current->string) == 0) {
        if (compt_word(&current->string) == 1) {
            if (find_tunnel(&current->string) == 0)
            ants_charger(&current->string, ants_trigger);
        }
    }
    return 0;
}

int file_reader(ff_LIST_t *current)
{
    first_room_reader(&current->string);
    second_room_reader(&current->string);
    third_room_reader(&current->string);
    comments_reader(&current->string);
    tunnels_reader(&current->string);
    ants_reader(&current->string);
    return 0;
}
