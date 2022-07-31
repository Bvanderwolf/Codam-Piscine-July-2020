#include <stdio.h>

int f(int n){
	int i = 0;
	printf("%d\n", n);
	if (n < 10)
		i = f(n + 1);
	printf("%d %d\n", n, i);
	return i;
}

int main(void){
	f(0);
	return 0;
}