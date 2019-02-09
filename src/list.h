#ifndef _LIST_H_
#   define _LIST_H_

typedef struct List {
    struct List *next;
    void *data;
} List;

List * list_prepend  (List *list,
                      void *data);

void   list_free_all (List *list);

#endif
