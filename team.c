#include<stdio.h>
int calculateSure(int[][], int);
int main(){
	int firstNum;
	stdin(firstNum);
	int userInput[3][firstNum];
	scanf("%d.%d.%d", &array[0], &array[1], &array[2]);
	int result = calculateSure(userInput, firstNum);
	printf("%d\n", result);
	return 0;
}
int calculateSum(int a[][], int b){
	int counter = 0;
	int a[][] = a[3][b];
	for (int i = 0; i < b; i++){
		if (a[3][i] == 1 && a[3][i+1] == 1){
			counter++;
		}
	}
	return counter;
}

		
