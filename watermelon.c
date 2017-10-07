#include<stdio.h>
bool division(int);
int main(){
	int inputWeight;
	gets(inputWeight);
	bool result = division(inputWeight);
	if(result == true){
		printf("YES");
	} else {
		printf("NO");
	}
}
bool division(int a){
	int sub1;
	int sub2;
	bool result = false;
	for(sub1 = 1; sub1 <= a; sub1++){
		sub2 = a - sub1;
		if((sub1%2 && sub2%2) == 0){
			result = true;
		} 
	}
	if(result == true){
		return result;
	} else {
		return false;
	}
}
	
