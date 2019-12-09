//
// Created by El Mehdi Benseddik on 12/8/2019.
//

#ifndef CNC_2010_SECONDPROBLEM_H
#define CNC_2010_SECONDPROBLEM_H

#include <stdlib.h>

typedef struct {
    int id;
    char clientName[20];
    double price;
    int deadline;
} bell_t;

typedef struct list {
    bell_t info;
    struct list *next;
} list_t;

list_t bellList_1 = {1, "first_bell", 11.50, 2001, NULL};
list_t bellList_2 = {2, "second_bell", 22.50, 2002, NULL};
list_t bellList_3 = {3, "third_bell", 33.50, 2003, NULL};
list_t bellList_4 = {4, "fourth_bell", 44.50, 2004, NULL};
list_t bellList_5 = {5, "fifth_bell", 55.50, 2005, NULL};

/**************/
/* Question 1 */
int do_get_number_of_elements(int (*op) (list_t*), list_t* pList) {
    return op(pList);
}
int get_number_of_elements(list_t* pList) {
    int i = 0;
    while (pList != NULL) {
        i++;
        pList = pList->next;
    }
    return i;
}

list_t* do_create_linked_list(list_t* (*op) (list_t*), list_t* plist) {
    return op(plist);
}
list_t* create_linked_list(list_t* plist) {
    plist = &bellList_1;
    bellList_1.next = &bellList_2;
    bellList_2.next = &bellList_3;
    bellList_3.next = &bellList_4;
    bellList_4.next = &bellList_5;
    bellList_5.next = NULL;
    return plist;
}

/**************/
/* Question 2 */
list_t* shift_element(list_t* plist) {
    while (plist != NULL) {
        //plist = plist->next;
        plist->info.id--;
        plist = plist->next;
    }
    return plist;
}
list_t* do_delete_element(list_t* (*op) (list_t*, int), list_t* plist, int value) {
    return op(plist, value);
}
list_t* delete_element(list_t* plist, int value) {
    if (plist != NULL) {
        if (plist->info.id == value) {
            shift_element(plist->next);
            return plist->next;
        }
        else {
            plist->next = delete_element(plist->next, value);
            return plist;
        }

    } else
        return NULL;
}




#endif //CNC_2010_SECONDPROBLEM_H
