#include<stdio.h>
int dominoPiling(int, int);
int main(){
	int result1; int result2;
	cin >> result1 >> result2;
	int result = dominoPiling(result1, result2);
	printf("%d\n", result);
	return 0;
}
int dominoPiling(int a, int b){
	int area = a * b;
	int result;
	if (area % 2 == 0){
		result = area / 2;
	}
	else{
		result = (int) area / 2;
	}
	return result;
}

