#include <stdio.h>
#include "FirstProblem.h"
#include "SecondProblem.h"

int main() {
    char str[] = "aabbbfffkkkr";
    char temp[] = "", temp_2[] = "";
    do_string_zipping(string_zipping, str, temp);
    printf("temp = %s\n", temp);
    do_string_coding(string_coding, str, temp_2);
    printf("temp_2 = %s\n", temp_2);
    return 0;
}