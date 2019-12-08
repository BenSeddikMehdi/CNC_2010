//
// Created by El Mehdi Benseddik on 12/8/2019.
//

#ifndef CNC_2010_SECONDPROBLEM_H
#define CNC_2010_SECONDPROBLEM_H

#include <stdlib.h>

typedef struct {
    int id;
    char clientName[20];
    float price;
    int deadline;
}bell_t;

typedef struct list {
    bell_t info;
    struct list *next;
}list_t;

const int currentYear = 2010;
list_t *first_element;

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
/*
list_t* do_create_linked_list(list_t* (*op) (list_t*), list_t* plist) {
    return op(plist);
}
list_t* create_linked_list(list_t* plist) {
    int numberOfElements = 0;
    printf("Enter the number of elements : ");
    scanf("%d", &numberOfElements);
    for (int i = 0; i < numberOfElements; ++i) {
        plist = malloc(sizeof(list_t));
        printf("Enter the %d id: ", i);
        scanf("%d", &plist->info.id);
        printf("Enter the %d price: ", i);
        scanf("%f", &plist->info.price);
    }
    return plist;
}*/

/**************/
/* Question 2 */
list_t* shift_element(list_t* plist) {
    while (plist != NULL) {
        plist->next = plist->next->next;
        plist->next->info.id--;
        plist = plist->next;
    }
    return plist;
}
list_t* do_delete_element(list_t* (*op) (list_t*, int), list_t* plist, int value) {
    return op(plist, value);
}
list_t* delete_element(list_t* plist, int value) {
    if (plist != NULL) {
        while (plist != NULL) {
            if (plist->info.id == value)
                shift_element(plist);
            else
                plist = plist->next;
        }
    }
    return plist;
}




#endif //CNC_2010_SECONDPROBLEM_H
