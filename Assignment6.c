#include <stdio.h>
#include <math.h>
#pragma warning (disable:4996)
void readNum();
void SortArray();
void PrintArray();
void STDEV();
void IndexCheck();

int main() {
	int n, number[1000];
	printf("enter number of integers: \n");
	scanf("%d", &n);
	readNum(number, n);
	SortArray(number, n);
	PrintArray(number, n);
	STDEV(number, n);
	IndexCheck(number, n);
	system("pause");
	return 0;
}

void readNum(int number[1000], int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("Please enter a number");
		scanf("%d", &number[i]);
	}
	return 0;
}

void SortArray(int number[1000], int n) {
	int i, j, temp = 0;
	for (i = 1; i < n; i++) {
		for (j = 0; j < n - 1; j++) {
			if (number[j] > number[j + 1]) {
				temp = number[j];
				number[j] = number[j + 1];
				number[j + 1] = temp;
			}
		}
	}
	return 0;
}

void PrintArray(int number[1000], int n) {
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", number[i]);
	printf("\n\n");
	return 0;
}

void STDEV(int number[1000], int n) {			
	int   i;
	double sum = 0.0, mean, standardDeviation = 0.0, stddev = 0.0;
	for (i = 0; i < n; ++i){
		sum += number[i];
	}
	mean = sum / n;
	for (i = 0; i < n; ++i) {
		standardDeviation += pow(number[i] - mean, 2.0);
	}
	stddev = (double)sqrt(standardDeviation / (n));
	printf("Standard Deviation = %f\n", stddev);
	return 0;
}

void IndexCheck(int number[1000], int n) {
	int NewNum, i = 0, flag;
	printf("Please enter a value to check it's in Index: ");
	scanf("%d", &NewNum);
	flag = 0;
	for (i = 0; i < n; i++) {
		if (NewNum == number[i]) {
			flag = 1;
			break;
		}
	}
	if (flag == 1) {
		printf("%d is in index %d on the array number\n", NewNum, i);
	}
	else {
		printf("The entered value can not be found\n");
	}
	return 0;
}

