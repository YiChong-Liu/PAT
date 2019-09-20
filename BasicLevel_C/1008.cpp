/*author:moonlake23
question1008:数组元素循环右移问题*/

/*注意:breakpoint为0或length时:
			打印原序列
		breakpoint大于length时:
			breakpoint%=length*/
#include<iostream>
using namespace std;
int main() {
	int length, breakpoint;
	cin >> length >> breakpoint;

	int num[101];
	for (int i = 0; i < length; i++)
		cin >> num[i];
	if (breakpoint > length)breakpoint %= length;
	if (breakpoint == length) {
		for (int i = 0; i < length - 1; i++)
			cout << num[i] << " ";
		cout << num[length - 1] << endl;
	}
	else {
		for (int i = length - breakpoint; i < length; i++)
			cout << num[i] << " ";
		for (int i = 0; i < length - breakpoint - 1; i++)
			cout << num[i] << " ";
		cout << num[length - breakpoint - 1] << endl;
	}
	return 0;
}
