#include <stdio.h>

#define N 50 

int main() {

    // Declare and initialize variables
    char str[N], * p_str;
    int len = 0;

    // Get user input and store string into char array
    for (p_str = &str[0]; p_str < &str[N]; p_str++) {

        *p_str = getchar();
        len++;

        // Checks if message finished
        if (*p_str == '\n') {
            break;
        }
    }

    // Prints the message reversed
    for (p_str = &str[len - 1]; p_str >= &str[0]; p_str--) {

        printf("%c", *p_str);

    }

    return(0);
}