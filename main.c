#include <stdio.h>
#include "FirstProblem.h"

int main() {
    char zippedString[] = "";
    //test = do_string_zipping(string_zipping, "AAAXXRRRRRTT", temp);
    do_string_zipping(string_zipping, "AAAXX    EKKEV 786888", zippedString);
    printf("Zipped String = %s", zippedString);

    return 0;
}