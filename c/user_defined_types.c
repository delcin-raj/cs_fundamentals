#include <stdio.h>

struct point
{
    int x;
    int y;
};

int main() {
    struct point p = {1, 2};
    printf("p.x = %d, p.y = %d\n", p.x, p.y);
    struct point q;
    q.y = -5; 
    q.x = 100;

    printf("x*y = %d\n", q.x * q.y);
}
