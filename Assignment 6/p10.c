
// Write three functions, using pointers, to concatenate two strings, to compare
// two strings and to reverse a string, respectively. Test these functions in a
// complete program.

#include <stdio.h>

// 1. Concatenate two strings
void concat(char* str1, char* str2) {
    while (*str1 != '\0') {
        str1++;
    }

    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0';
}

// 2. Compare two strings
int compare(char* str1, char* str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return *str1 - *str2;
        }

        str1++;
        str2++;
    }

    return *str1 - *str2;
}

// 3. Reverse a string
void revString(char* string) {
    char* start = string;
    char* end = string;
    char temp;

    while (*end != '\0') {
        end++;
    }

    end--;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    char string1[256];
    char string2[128];

    printf("Enter string 1: ");
    fgets(string1, sizeof(string1), stdin);

    printf("Enter string 2: ");
    fgets(string2, sizeof(string2), stdin);

    // Remove newline from string 1
    char* p = string1;
    while (*p != '\0') {
        if (*p == '\n') {
            *p = '\0';
            break;
        }
        p++;
    }

    // Remove newline from string 2
    p = string2;
    while (*p != '\0') {
        if (*p == '\n') {
            *p = '\0';
            break;
        }
        p++;
    }

    printf("\nComparison: %d", compare(string1, string2));

    concat(string1, string2);
    printf("\nConcatenation: %s", string1);

    revString(string1);
    printf("\nReversed string: %s\n", string1);

    return 0;
}
