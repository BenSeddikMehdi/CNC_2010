#include <stdio.h>
#include "SecondProblem.h"

int main() {
    list_t* temp = NULL;
    temp = do_create_linked_list(create_linked_list, temp);
    printf("%d", do_get_number_of_elements(get_number_of_elements, temp));
    return 0;
}