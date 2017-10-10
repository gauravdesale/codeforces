#include<stdio.h>
#include<vector>
void removeConsonants(vector<char>);
int main(){
	String input;
	gets(input);
	vector<char> v(input.begin(), input.end());
	removeConsonants(v);
	return 0;
}
void removeConsonants(vector<char> param){
	for (int i = 0; i < sizeof(param); i++){
		if (param[i] == 'a')//keep going to check all the values
			vec.erase(vec.begin() + i);
	}
	for (int i = 0; i < sizeof(param); i++){
		printf("." + "%c", param[i]);
	}
}

