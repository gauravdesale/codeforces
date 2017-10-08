#include<stdio.h>
#include<vector>
vector <string> calculateLength(vector <string>);
vector <string>  main() {
	int initialNum;
	cin >> initialNum;
	vector <string> wordsStore;
	for (int i = 0; i < initialNum; i++){
		string wordsInput;
		cin >> wordsInput 
		wordsStore.push.back(wordsInput);
	}
	vector <string> result = calculateLength(wordsStore);
	return result;
}

vector <string> calculateLength(vector <string> input){
	int counter = 0;
	for (int i : input){
		char[] newOne = input[i];
		for (int j in newOne){
			counter++;
		}
		input[i] = newOne[0] + counter + newOne[newOne.length-1];
	}
	return input;
}
