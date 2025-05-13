#include <stdio.h>
#include <string.h>
#include "hello_lib.h"

// Using a static buffer for simplicity
static char greeting_buffer[100];

const char* hello_get_greeting(const char* name) {
    if (name == NULL || strlen(name) == 0) {
        strcpy(greeting_buffer, "Hello, Guest!");
    } else {
        snprintf(greeting_buffer, sizeof(greeting_buffer), "Hello, %s!", name);
    }
    
    return greeting_buffer;
}
