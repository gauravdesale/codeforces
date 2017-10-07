#include<stdio.h>
int numOfFlagstones(int, int, int);
int main(){
	int result = numOfFlagStones(6,6,4);
	printf("%d\n", result);
	return 0;
}
int numOfFlagStones(int height, int width, int flagstone){
	int counter = 0;
	int area = height * width;
	int flagstoneArea = flagstone * flagstone;
	for (int i = 0; i < area; i++){
		if (i%flagstoneArea == 0){
			counter++;
		}
	}
	return counter =;
}
