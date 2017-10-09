#include<stdio.h>
int nextRound(int, int, vector <int>);
int main(){
	int numOfPlayers; int threshold; vector <int> inputNums;
	cin >> numOfPlayers >> threshold;
	cin >> inputNums;
	if (inputNums = '\n'){
		break;
	}
	int result = nextRound(numOfPlayers, threshold);
	printf("%d\n", result);
	return 0;
}
int nextRound(int a, int b, vector <int> c){
	int counter = 0;
	for (int i = 0; i < a; i++){
		if (c[i] > b){
			counter++;
		}
	}
	return counter;
}
