//
// Created by El Mehdi Benseddik on 12/8/2019.
//

#ifndef CNC_2010_SECONDPROBLEM_H
#define CNC_2010_SECONDPROBLEM_H

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

/**************/
/* Question 2 */

void do_delete_element(l)





#endif //CNC_2010_SECONDPROBLEM_H
