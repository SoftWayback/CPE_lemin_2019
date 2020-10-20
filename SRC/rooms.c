/*
** EPITECH PROJECT, 2020
** lem_in
** File description:
** lem_in
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/mylist.h"


struct linked_list *add_rooms_elem(char *elem, rooms_list_t *list)
{
    struct rooms_linked_list *new = malloc(sizeof(rooms_list_t));

    if (new == NULL)
        return NULL;
    new->data = elem;
    if (list == NULL)
        new->next = NULL;
    else
        new->next = list;
    return (new);
}

struct linked_list *free_rooms_list(rooms_list_t *list)
{
    struct rooms_linked_list *temp = list;

    while (temp != NULL) {
        temp = temp->next;
        free(list);
        list = temp;
    }
    return NULL;
}

void display_rooms_list(rooms_list_t *list)
{
    struct rooms_linked_list *temp = list;
    char *actual = temp->data;

    if (temp == NULL)
        return;
    while (temp != NULL) {
        my_putstr(actual);
        temp = temp->next;
    }
    return 0;
}

int rooms_charger(char *elem)
{
    rooms_list_t *list = NULL;

    list = add_rooms_elem(elem, list);
    display_rooms_list(list);
    list = free_rooms_list(list);
    return 0;
}
