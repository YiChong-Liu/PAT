/*author:moonlake23
question1009:说反话*/

#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main() {
	char sentence[101];
	cin.getline(sentence, 100);
	int len = strlen(sentence);
	for (int i = len-1; i >=0; i--) {
		if (sentence[i] == ' ') {
			for (int j = i + 1; sentence[j] != ' ' &&j<len; j++) {
				cout << sentence[j];
			}
			cout << " ";
		}
		else if (i == 0) {
			for (int j = i; sentence[j] != ' '&&j < len; j++) {
				cout << sentence[j];
			}
		}
	}
	return 0;
}