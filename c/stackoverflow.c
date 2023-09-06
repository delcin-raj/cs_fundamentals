#include<stdio.h>

void f(int n) {
	printf("f(%d)\n", n);
	if (n < 5) {
		f(n+1);
	}
}

int main() {
	f(1);
}
