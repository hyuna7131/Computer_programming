#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX_SET_SIZE 100
#define HAVE_ELEMENT 1
#define DO_NOT_HAVE_ELEMENT 0

int hasElement(int set[], int size, int element);
int setUnion(int set1[], int size1, int set2[], int size2, int result_set[]);
int setIntersecton(int set1[], int size1, int set2[], int size2, int result_set[]);
int setComplements(int set1[], int size1, int set2[], int size2, int result_set[]);
void printSet(int set[], int size);

int main(int argc, char* argv[]) {
	int i = 0;

	int SetA[MAX_SET_SIZE];
	int SetB[MAX_SET_SIZE];
	int SetC[MAX_SET_SIZE * 2];

	int SizeOfSetA;
	int SizeOfSetB;
	int SizeOfSetC;

	printf("Enter the size of Set A:");
	scanf("%d", &SizeOfSetA);

	while (i < SizeOfSetA)
	{
		printf("Enter the number for Set A (%d/%d):", i + 1, SizeOfSetA);
		scanf("%d", &SetA[i]);
		i = addOneElement(SetA, i, SetA[i]);
	}

	printf("Enter the size of Set B:");
	scanf("%d", &SizeOfSetB);
	i = 0;

	while (i < SizeOfSetB)
	{
		printf("Enter the number for Set B (%d/%d):", i + 1, SizeOfSetB);
		scanf("%d", &SetB[i]);
		i = addOneElement(SetB, i, SetB[i]);
	}

	printf("Set A: ");
	printSet(SetA, SizeOfSetA);

	printf("Set B: ");
	printSet(SetB, SizeOfSetB);

	SizeOfSetC = setUnion(SetA, SizeOfSetA, SetB, SizeOfSetB, SetC); // Union, SetC is the result set
	printf("Union of SetA and SetB: ");
	printSet(SetC, SizeOfSetC);

	SizeOfSetC = setIntersecton(SetA, SizeOfSetA, SetB, SizeOfSetB, SetC); //Intersection, SetC is the result set
	printf("Intersection of SetA and SetB: ");
	printSet(SetC, SizeOfSetC);

	SizeOfSetC = setComplements(SetA, SizeOfSetA, SetB, SizeOfSetB, SetC); //Complements, SetC is the result set
	printf("Set-theoretic difference of SetA and SetB (SetA - SetB): ");
	printSet(SetC, SizeOfSetC);

	return 0;
}

/*
	If the set has the element, returns 1;
	else return 0;
*/
int hasElement(int set[], int size, int element)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		if (set[i] == element)
			return HAVE_ELEMENT; // we found it!
	}
	return DO_NOT_HAVE_ELEMENT;
}

// 원소를 집합에 추가. 이미 존재하면 추가하지 않고 redundant라고 출력한다. 
// 변화된(혹은 유지된) 집합 크기를 반환한다. 
int addOneElement(int set[], int size, int element)
{
	if (hasElement(set, size, element) == DO_NOT_HAVE_ELEMENT) {
		set[size] = element;
		size++;
	}
	else
		printf("It is redundant. Please retry.\n");
	return size;
}

void printSet(int set[], int size)
{
	int i = 0;
	printf("{ ");
	for (i = 0; i < size; i++)
	{
		if (i < size - 1) printf("%d, ", set[i]);
		else printf("%d ", set[i]);
	}
	printf("}\n");
}

int setUnion(int set1[], int size1, int set2[], int size2, int result_set[])
{
	int i, count = 0;

	for (i = 0; i < size1; i++)
		result_set[i] = set1[i];

	for (i = 0; i < size2; i++) {
		if (hasElement(set1, size1, set2[i]) == DO_NOT_HAVE_ELEMENT) {
			result_set[count + size1] = set2[i];
			count++;
		}
		else
			continue;
	}

	return size1 + count;
}

int setIntersecton(int set1[], int size1, int set2[], int size2, int result_set[])
{
	int i, count=0;

	for (i = 0; i < size1; i++) {
		if (hasElement(set1, size1, set2[i]) == HAVE_ELEMENT) {
			result_set[count] = set2[i];
			count++;
		}
	}

	return count;
}

int setComplements(int set1[], int size1, int set2[], int size2, int result_set[])
{
	int i, count = 0;

	for (i = 0; i < size1; i++) {
		if (hasElement(set2, size1, set1[i]) == DO_NOT_HAVE_ELEMENT) {
			result_set[count] = set1[i];
			count++;
		}
	}

	return count;
}