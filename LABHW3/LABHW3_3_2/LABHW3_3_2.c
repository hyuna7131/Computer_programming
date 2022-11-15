#define _CRT_SECURE_NO_WARNINGS
#define SIZE 10 
#include <stdio.h> 
int askReservation();
void printSeats(int s[], int size);
void processReservation(int s[], int size, int seatNumber);

int main(void) // �������� ����
{
	int seatChoice;
	int seats[SIZE] = { 0 };

	printf("******�¼� ���� �ý���******\n");
	printSeats(seats, SIZE);

	while (seats[SIZE-1] == 0)
	{		
		seatChoice = askReservation();
		processReservation(seats, SIZE, seatChoice);
		printSeats(seats, SIZE);

		while (getchar() != '\n'); // ���� ���		
	}
}
int askReservation()
{
	int choice;
	
	printf("\n�¼��� �����Ͻðڽ��ϱ�?(���) ");
	scanf("%d", &choice);
	
	return choice;
}
void processReservation(int s[], int size, int seatNumber)
{
	int i, j;

	for(i=0; i<SIZE; i++)
		if (s[i] == 0){
			if (i + seatNumber > size) {
				printf(">>>%d���� ������ �ȵ˴ϴ�", i + seatNumber - size);
				for (j = i; j < size; j++)
					s[j] = 1;
			}
			else {
				for (j = i; j < i + seatNumber; j++)
					s[j] = 1;
			}
			break;
		}
	printf("\n");
}
/*
void processReservation(int s[], int size, int seatNumber)
{
	int i;
	int overCount = 0;

	for(i=0; i<seatNuber; i++)
	{
		if(i < size)
			s[i] = 1;
		else
			overCount++;
	}
	// HW3_3_3 �� �Ʒ� �ڵ常 �߰��ϸ� ��
	if(overCount > 0)
		printf(">>>%d���� ���� �ȵ�\n", overCount);
}

void processReservation(int s[], int size, int seatNumber)
{
	int i, total = 0;

	for(i=0; i<size; i++){
		if (s[i] == 0){
			s[i] = 1;
			total += 1;
			if(total == num)
				break;
			}
		}
	}

	if(total < num)
		printf(">>>%d���� ���� �ȵ�\n", num - total);
}
*/
void printSeats(int s[], int size)
{
	int i;

	printf("----------------------\n");
	printf(" 1 2 3 4 5 6 7 8 9 10\n");
	printf("----------------------\n");
	for (i = 0; i < size; i++)
		printf("%2d", s[i]);
	printf("\n");
}