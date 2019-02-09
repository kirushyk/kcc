#include <stdlib.h>
#include <src/list.h>

int main()
{
    List *list = NULL;
    int *data = malloc(sizeof(int));
    *data = 2;
    list = list_prepend(list, data);
    data = malloc(sizeof(int));
    *data = 3;
    list = list_prepend(list, data);
    data = malloc(sizeof(int));
    *data = 5;
    list = list_prepend(list, data);
    return 0;
}
