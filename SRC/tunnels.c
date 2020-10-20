/*
** EPITECH PROJECT, 2020
** lem_in
** File description:
** lem_in
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/mylist.h"

struct linked_list *add_tunnels_elem(char *elem, tunnels_list_t *list)
{
    struct tunnels_linked_list *new = malloc(sizeof(tunnels_list_t));

    if (new == NULL)
        return NULL;
    new->data = elem;
    if (list == NULL)
        new->next = NULL;
    else
        new->next = list;
    return (new);
}

struct linked_list *free_tunnels_list(tunnels_list_t *list)
{
    struct tunnels_linked_list *temp = list;

    while (temp != NULL) {
        temp = temp->next;
        free(list);
        list = temp;
    }
    return NULL;
}

void display_tunnels_list(tunnels_list_t *list)
{
    struct tunnels_linked_list *temp = list;

    char *actual = temp->data;
    if (temp == NULL)
        return;
    while (temp != NULL) {
        my_putstr(actual);
        temp = temp->next;
    }
}

int tunnels_charger(char *elem, int trigger)
{
    tunnels_list_t *list = NULL;

    if (trigger == 0)
        my_putstr("#tunnels\n");
    list = add_tunnels_elem(elem, list);
    display_tunnels_list(list);
    list = free_tunnels_list(list);
    return (0);
}
