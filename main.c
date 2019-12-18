#include <stdio.h>
#include "FirstProblem.h"
#include "SecondProblem.h"

int main() {
    list_t* plist = NULL;
    plist = do_create_linked_list(create_linked_list, plist);
    do_delete_element(delete_element, plist, 3);
    return 0;
}