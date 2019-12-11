#include <stdio.h>
#include "SecondProblem.h"

int main() {
    list_t* temp = NULL;
    temp = do_create_linked_list(create_linked_list, temp);
    printLinkedList(temp);
    temp = do_delete_element(delete_element, temp, 4);
    temp = do_bell_taxes(bell_taxes, temp);
    printLinkedList(temp);
    temp = NULL;
    return 0;
}