/**
Semester 2. 
Zadanie 1.1 
*/

#include <stdio.h>
#define N 9

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
	
	// (a) x=0; for(k=0; k<N; ++k)x+= ƒx(a+k);

	printf("Zadanie 1.1.a\n");
	wyswietl(a, a + N); printf("\n");
	x = 0; 
	for(k = 0; k < N; ++k) { 
		x += *(a + k);
		printf("x = %d\n", x);
	}

	// (b) x=0; for(p=a; p<a+N; ++p)x+= *p;
	printf("Zadanie 1.1.b\n");
	x = 0; 
	for(p = a; p < a+N; ++p) {
		x += *p;
		printf("x = %d\n", x);
	}
	
	// (c) p1=a; while(p1<a+N && *p1!=0) ++p1;
	printf("Zadanie 1.1.c\n");
	p1 = a; 
	while(p1 < a+N && *p1 != 0) {
		printf("p1 = %d\n", *p1);
		
		++p1;
	}
		
	// (d) p1 = a; for(p = a+1; p < a + N; ++p) if(*p1 < *p) p1 = p;
	printf("Zadanie 1.1.d\n");
	p1 = a; 
	for(p = a+1; p < a + N; ++p) {
		printf("p1 = %d\n", *p1);
		if(*p1 < *p) {
			p1 = p;
		}
	} 		

	return 0;
}
