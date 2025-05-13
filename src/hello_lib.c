#include <stdio.h>
#include "hello_lib.h"

int main() {
    const char* greeting = hello_get_greeting("World");
    printf("%s\n", greeting);
    return 0;
}
