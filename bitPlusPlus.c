#include<stdio.h>
int plusplus(int, String);
int main(){
	int inputNum;
	gets(inputNum);
	int result;
	for (int i = 0; i < inputNum; i++) {
		String operation;
		gets(operation);
		if (operation[i] == '+' || operation[i] == 'x' || operation[i] == '-') {
		result = plusplus(inputNum, operation);
		}
		}
	return result;
}
int plusplus(int a, String b) {
	int result;
	for (int i = 0; i < inputNum; i++) {
		if (operation[1] == '+') {
			result = a;
		}
		else if (operation[1] == 'X') {
			result =  a+1;
		}
	}
	return result;
}

	


