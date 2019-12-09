#include <stdio.h>
#include "SecondProblem.h"

int main() {
    list_t* temp = NULL;
    temp = do_create_linked_list(create_linked_list, temp);
    temp = do_delete_element(delete_element, temp, 3);
    free(temp);
    return 0;
}