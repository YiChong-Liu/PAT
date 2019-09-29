/*author:moonlake23
question1014:福尔摩斯的约会*/

#include<iostream>
#include<cstring>
using namespace std;

int min(int a, int b) {
	return (a < b) ? a : b;
}

//转换为星期几
void translate(int day) {
	if (day == 1)cout << "MON" << " ";
	else if (day == 2)cout << "TUE" << " ";
	else if (day == 3)cout << "WED" << " ";
	else if (day == 4)cout << "THU" << " ";
	else if (day == 5)cout << "FRI" << " ";
	else if (day == 6)cout << "SAT" << " ";
	else if (day == 7)cout << "SUN" << " ";
}

int main() {
	char s1[61], s2[61];
	char s3[61], s4[61];
	cin >> s1 >> s2 >> s3 >> s4;
	int len1 = strlen(s1), len2 = strlen(s2);
	//星期数+小时数
	int pos;//记录星期数位置
	for (int i = 0; i < min(len1, len2); i++) {
		if ((s1[i] >= 'A'&&s1[i] <= 'G')&&s1[i] == s2[i]) {
			pos = i;
			int temp = s1[i] - 64;
			translate(temp);
			break;
		}
	}

	for (int i = pos+1; i < min(len1, len2); i++) {
		if (s1[i] == s2[i]&&(s1[i]>='A'&&s1[i]<='N')) {
			int temp = s1[i] - 55;
			if (temp >= 10) {
				cout << temp << ":";
			}
			else {
				cout << "0" << temp << ":";
			}
			break;
		}
	}

	int len3 = strlen(s3), len4 = strlen(s4);
	for (int i = 0; i < min(len3, len4); i++) {
		if ((s3[i] >= 'a'&&s3[i] <= 'z' || s3[i] >= 'A'&&s3[i] <= 'Z')&&s3[i] == s4[i]) {
			if (i >= 10)cout << i << endl;
			else
				cout << "0" << i << endl;
			break;
		}
	}
	return 0;
}