#ifndef HELLO_LIB_H
#define HELLO_LIB_H

/**
 * Returns a greeting message for the provided name.
 * 
 * @param name The name to include in the greeting
 * @return A string containing the greeting (statically allocated)
 */
const char* hello_get_greeting(const char* name);

#endif /* HELLO_LIB_H */
