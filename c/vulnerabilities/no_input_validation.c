#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* read_fixed(int len) {
   char *buffer = malloc(len * sizeof(char));
   scanf("%s", buffer);
   return buffer;
}

char* read_arbitrary() {
   int len = 5;
   char *buffer = malloc(len * sizeof(char));

   while (fgets(buffer, len, stdin)) {
        if (strchr(buffer, '\n')) {
            // Input successfully read
            break;
        } else {
            // Input exceeds the buffer size, reallocate
            len *= 2; // double the buffer size
            char *new_input = realloc(buffer, len);
            free(buffer);
            buffer = new_input;
        }
   }
   return buffer;
}

int main () {
   // char *b1 = read_fixed(5);
   char *b2 = read_arbitrary();
   
   // printf("b1 = %s\n", b1);
   printf("b2 = %s\n", b2);
}