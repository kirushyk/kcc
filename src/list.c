#include <stdlib.h>
#include "list.h"

List * 
list_prepend(List *list, void *data)
{
    List * new_element = malloc(sizeof(List));
    new_element->data = data;
    new_element->next = list;
    return new_element;
}

void   
list_free_all (List *list)
{
    for (List *i = list; i != NULL; i = i->next) 
    {
        free(i->data);
    }
}
