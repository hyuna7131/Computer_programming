#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int x[] = { 0, 0, 1, 2, 3 };
	char c[] = "BBCDE";
	double f = 2.3;
	int i, sum = 0;

	// 가) 추가
	int* px;
	char* pc;
	double* pd;

	px = x;  // px = &x[0]
	pc = c;  // pc = &c[0]
	pd = &f;
	printf("가-1) %d %c %.1f\n", x[0], c[0], f);

	printf("가-2) %d %c %.1f\n", *px, *pc, *pd); 

	// 나) 추가
	*px = -1;  // x[0] = -1;
	*pc = 'A'; // c[0] = 'A';
	*pd = 3.5; // f = 3.5;

	printf("나) %d %c %.1lf\n", x[0], c[0], f);

	// 다) 추가
	for (i = 0; i < 5; i++) {
		sum += *px;            //sum += *(px + i);
		px++;   
	}

	printf("다) sum = %d\n", sum); // sum의 값은 5이다. x[0]의 값은 위에서 이미 -1로 수정
	
	// 라) 
	px = x;
	for (i = 0; i < sizeof(x) / sizeof(int); i++)
	{
		*px = 100;
		px++; // 라-B) 
	}

	// 마) 
	pc = c;
	for (i = 0; i < sizeof(c) / sizeof(char); i++)
	{
		*pc = 'X';
		pc++; // 마-B)
	}
}