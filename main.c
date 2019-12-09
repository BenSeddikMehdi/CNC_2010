#include <stdio.h>
#include "SecondProblem.h"

int main() {
    list_t* temp = NULL;
    temp = do_create_linked_list(create_linked_list, temp);
    //temp = do_delete_element(delete_element, temp, 6);
    printf("Bell number = %d", do_get_number(get_number, temp));
    return 0;
}