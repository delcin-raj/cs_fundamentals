#include <stdio.h>

// What is the runtime complexity of this algorithm?
// Assume length of string 1 is m and length of string 2 is n
// min(m, n)
int str_equals(char *s1, char *s2) {
    // I'm expecting that strings are null terminated
    // x && y, if either x or y is F then x && y is false
    while (*s1 != 0 && *s2 != 0) {
        // The loop will terminate if at least one of the string terminates
        if (*s1 != *s2) return 0;
        s1++; s2++;
    }
    
    // If *s1 != 0 -> False or *s2 != 0 -> False
    // *s1 = 0 or *s2 = 0
    // At least one of the string is terminated.
    // "abc" ['a', 'b', 'c', 0], "abcdef" ['a', 'b', 'c', 'd', 'e', 'f', '\0']
    // "abcd", "ab"
    // "123", "123"
    return *s1 == 0 && *s2 == 0; // checking if both the pointers are terminated
}


void using_switch(int i) {
    switch (i)
    {
    case 1:
        printf("one\n");
        break;
    case 2:
        printf("two\n");
        break;
    case 3:
        printf("three\n");
        break;
    case 4:
        printf("four\n");
        break;
    case 5:
        printf("five\n");
        break;
    case 6:
        printf("six\n");
        break;
    case 7:
        printf("seven\n");
        break;
    case 8:
        printf("eight\n");
        break;
    case 9:
        printf("nine\n");
        break;
    case 10:
        printf("ten\n");
        break;
    default:
        break;
    }
}


void using_arr(int i) {
    // if num_to_str is declared as a global variable, then we have no 
    // control over that variable. So we cannot guarantee the correct answer
    static char* num_to_str[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    printf("Int to string \n");
    printf("%s\n", num_to_str[i-1]);
}

void erratic() {
    // num_to_str[3] = "bomb";
} 

void str_to_int_switch (char * str) {
    // Unfortunately not possible
}

void str_to_int_arr (char * str) {
    static char * num_to_str[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    printf("Converting string to int\n");

    for (int i = 0; i < 10; i++) {
        if (str_equals(str,num_to_str[i])) {
            printf("%s = %d\n", str, i+1);
            break;
        }
    }

}

int main () {
    // If the user enters number from 1..10 print "one".."ten"
    char four[] = {'f', 'o', 'u', 'r', 0};
    str_to_int_arr(four);

    // "one" -> 1
    // "two" -> 2
}