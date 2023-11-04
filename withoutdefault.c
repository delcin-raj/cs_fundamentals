#include <stdio.h>

int str_equals(const char *str1, const char *str2) {
    while (*str1 && *str2) {
        if (*str1 != *str2) {
            return 0; 
        }
        str1++;
        str2++;
    }
    
    return (*str1 == '\0' && *str2 == '\0');  
}

int main() {
    char str1[100];
    char str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    if (str_equals(str1, str2)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
