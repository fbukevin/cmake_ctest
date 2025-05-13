#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "hello_lib.h"

// A simple test function
void test_hello_function() {
    const char* result = hello_get_greeting("World");
    assert(result != NULL);
    printf("Test 1: Got greeting: %s\n", result);
    
    // Check if the greeting contains "World"
    if (strstr(result, "World") == NULL) {
        printf("Test failed: Expected greeting to contain 'World'\n");
        exit(1);
    }
    
    printf("Test 1 passed!\n");
}

// Another test function
void test_hello_empty_input() {
    const char* result = hello_get_greeting("");
    assert(result != NULL);
    printf("Test 2: Got greeting with empty input: %s\n", result);
    
    // Add your assertion for empty input here
    
    printf("Test 2 passed!\n");
}

int main() {
    printf("Running hello_lib tests...\n");
    
    test_hello_function();
    test_hello_empty_input();
    
    printf("All tests passed!\n");
    return 0;
}
