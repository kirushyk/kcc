#ifndef _LIST_H_
#   define _LIST_H_

typedef struct List {
    struct List *next;
    void *data;
} List;

#endif
