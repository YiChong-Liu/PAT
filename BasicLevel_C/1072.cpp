/*author:moonlake23
question1072:开学寄语*/

/*坑点:第三个测试点过不去，
原因很可能是用int时忘记把编号
恢复为4位*/
#include<iostream>
using namespace std;

typedef struct {
	char name[5];
	int kind;
	int code[11] = { 0 };
}StuInfor;

int main() {
	int students, cases;
	cin >> students >> cases;
	int number[7];
	for (int i = 0; i < cases; i++) {
		cin >> number[i];
	}

	int len = students;
	int stuall = 0, thingall = 0;
	while (len > 0) {
		len--;
		StuInfor yh;
		cin >> yh.name >> yh.kind;
		int num[11], mark = 0;
		for (int i = 0; i < yh.kind; i++) {
			cin >> yh.code[i];
			for (int j = 0; j < cases;j++)
				if (yh.code[i] == number[j]) {
					num[mark++] = yh.code[i];
				}
		}
		if (mark > 0) {
			cout << yh.name << ": ";
			for (int i = 0; i < mark; i++) {
				//4位长度
				printf("%04d", num[i]);
				if (i == mark - 1)cout << endl;
				else
					cout << " ";
			}
			stuall++;
			thingall += mark;
		}
	}
	cout << stuall << " " << thingall << endl;
	return 0;
}