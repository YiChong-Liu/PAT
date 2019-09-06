/*author:moonlake23
question1094:谷歌的招聘*/

#include <iostream>
#include <string>
using namespace std;
bool IsPrimenum(int n) {
	if (n == 0 || n == 1) return false;
	for (int i = 2; i * i <= n; i++)
		if (n % i == 0) return false;
	return true;
}
int main() {
	int length, piece;
	string s;
	cin >> length >> piece >> s;
	for (int i = 0; i <= length - piece; i++) {
		string t = s.substr(i, piece);
		int num = stoi(t);
		if (IsPrimenum(num)) {
			cout << t << "\n";
			return 0;
		}
	}
	cout << "404\n";
	return 0;
}