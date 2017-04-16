#include <stdio.h>
#define N = 9;

void wyswietl(int *p1, int *p2)
{
	while(p1 != p2){
		printf("%d ", *p1);
		++p1;
	}
}

int main() {
	int a[N] = {5, 8, 3, 0, 2, 4, 0, 7, 3};
	int k, x;
	int *p, *p1;
	

	for(k = 0; k < 7; ++k) { 
		printf("%d", p[k]);
	}
	printf("\n");

	p = &a[2];
	for(k = -2; k < 5; ++k) {
		printf("%d", p[k]);
	}

	return 0;
}
