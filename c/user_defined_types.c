#include <stdio.h>

typedef struct point
{
    int x;
    int y;
} point;

int main() {
    point p = {1, 2};
    printf("p.x = %d, p.y = %d\n", p.x, p.y);
}
