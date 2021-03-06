//
// Created by El Mehdi Benseddik on 12/7/2019.
//

#ifndef CNC_2010_FIRSTPROBLEM_H
#define CNC_2010_FIRSTPROBLEM_H

#include <string.h>
/****************************************/
/* Problem I: Zipping and RLE Algorithm */
      /* RLE: Run-Length Encoding */
/****************************************/

/**************/
/* Question 1 */
void do_string_zipping(void (*op) (char*, char []), char* string, char temp[]) {
    op(string, temp);
}
void string_zipping(char* str, char* temp) {
    int j = 0;
    const unsigned int n =  strlen(str);
    unsigned int a = 0;
    a = n;
    for (int k = 0; k < (int)(n); ++k) {
        if (str[k] == str[k+1]) continue;
        else {
            temp[j] = str[k];
            j++;
        }
    }
    temp[j] = '\0';
}

void do_string_coding(void (*op) (char*, char*), char* string, char codedString[]) {
    op(string, codedString);
}
void string_coding(char* str, char codeString[]) {
    int j = 0, count = 0;
    const unsigned int n =  strlen(str);
    unsigned int a = 0;
    a = n;
    for (int k = 0; k < (int)(n); ++k) {
        if (str[k] == str[k+1]) {
            count++;
            continue;
        }
        else {
            codeString[j] = str[k];
            codeString[j+1] = (char) (++count + '0');
            j += 2;
            count = 0;
        }
    }
    codeString[j] = '\0';
}

#endif //CNC_2010_FIRSTPROBLEM_H
