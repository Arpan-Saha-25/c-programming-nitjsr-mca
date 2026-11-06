// Write five user defined functions which perform the tasks of strlen ( ),
// strcmp ( ), strcpy ( ), strrev ( ), strcat ( ). Write a main ( ) to test
// these functions.

#include <stdio.h>

int str_len(char* string);
int str_cmp(char* string1, char* string2);
char* str_cpy(char* dest, char* src);
char* str_rev(char* string);
char* str_cat(char* dest_string, char* src_string);

int main() {
    char string1[256], string2[256], copy[256];

    printf("Enter the strings:\n");
    fgets(string1, 256, stdin);
    fgets(string2, 256, stdin);

    // Remove newline characters
    int len1 = str_len(string1);
    if (string1[len1 - 1] == '\n') string1[len1 - 1] = '\0';

    int len2 = str_len(string2);
    if (string2[len2 - 1] == '\n') string2[len2 - 1] = '\0';

    printf("\nString 1: %s", string1);
    printf("\nString 2: %s", string2);

    printf("\nLength: %d", str_len(string1));
    printf("\nstr_cmp: %d", str_cmp(string1, string2));

    str_cpy(copy, string1);
    printf("\nstr_cpy: %s", copy);

    str_rev(copy);
    printf("\nstr_rev: %s", copy);

    str_cat(string1, string2);
    printf("\nstr_cat: %s", string1);

    return 0;
}

int str_len(char* string) {
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }
    return i;
}

int str_cmp(char* string1, char* string2) {
    int i = 0;

    while (string1[i] != '\0' || string2[i] != '\0') {
        if (string1[i] != string2[i]) {
            return string1[i] - string2[i];
        }
        i++;
    }

    return 0;
}

char* str_cpy(char* dest, char* src) {
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
    return dest;
}

char* str_rev(char* string) {
    int i = 0, j = str_len(string) - 1;
    char temp;

    while (i < j) {
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;

        i++;
        j--;
    }

    return string;
}

char* str_cat(char* dest_string, char* src_string) {
    int i = str_len(dest_string);
    int j = 0;

    while (src_string[j] != '\0') {
        dest_string[i] = src_string[j];
        i++;
        j++;
    }

    dest_string[i] = '\0';
    return dest_string;
}
