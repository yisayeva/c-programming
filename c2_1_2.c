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

void wyswietl1(int *p1, int *p2) {
	while(++p1 != p2) printf("%d ", *p1);
}

void wyswietl2(int *p1, int *p2) {
	while(p1++ != p2) printf("%d ", *p1);
}

void wyswietl3(int *p1, int *p2) {
	while(p1 != p2) printf("%d ", *++p1);
}

void wyswietl4(int *p1, int *p2) {
	while(p1 != p2) printf("%d ", *p1++);
}

int main() {
	int a[N] = {5, 8, 3, 0, 2, 4, 0, 7, 3};
	int k, x;
	int *p, *p1;
	

	printf("Zadanie 1.2.a\n");
	printf("wyswietl()  => ");
	wyswietl(a, a + N); printf("\n");

	printf("wyswietl1() => ");
	wyswietl1(a, a + N); printf("\n");
	
	printf("wyswietl2() => ");
	wyswietl2(a, a + N); printf("\n");

	printf("wyswietl3() => ");
	wyswietl3(a, a + N); printf("\n");

	printf("wyswietl4() => ");
	wyswietl4(a, a + N); printf("\n");

	return 0;
}
