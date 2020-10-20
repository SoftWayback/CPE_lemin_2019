/*
** EPITECH PROJECT, 2020
** lem_in
** File description:
** lem_in
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "../include/mylist.h"

int main(int ac, char **av)
{
    char *line;
    ff_LIST_t *current, *head;
    size_t len = 0;
    size_t read;

    head = current = NULL;
    while ((read = getline(&line, &len, stdin)) != -1){
        ff_LIST_t *node = malloc(sizeof(ff_LIST_t));
        node->string = my_strdup(line);
        node->next = NULL;
        if (head == NULL){
            current = head = node;
        } else {
            current = current->next = node;
        }
    }
    for (current = head; current ; current = current->next)
        file_reader(current->string);
    my_putstr("#moves\n");
    return 0;
}
