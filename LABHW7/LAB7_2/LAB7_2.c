#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(void)
{
	int n[] = { -1, 1, 2, 3, 4 };
	int* p1 = n;
	int* p2 = p1;

	printf("%d\n", n[0]);
	printf("%d\n", (*p1)++);
	printf("%d\n", n[0]);

	printf("%d\n", *p2++);   // (*p2)++  => ���� ����    //*p2++  => �ּҰ��� �̻� => (����)1.*p2  2.p2++
	// *(�������� ����)�� ++�� �켱����(p69)�� ����. �̶� ���չ����� <- �̹Ƿ� ���� �ʿ�
	// ��ġ�� ++�� ���� �����ϰ� �״��� *�� �����Ѵ�. �� *(p2++)�� ����. 
	printf("%d\n", *p2);
	printf("%d\n", *++p1);
	printf("%d\n", *p1);
}