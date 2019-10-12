/*author:moonlake23
question1038:统计同成绩学生(初版)*/

/*最初的思路:直接开2个数组，一个存储分数，
另一个存储数字出现的次数。
结果有一个点过不了，运行超时*/

#include<iostream>
using namespace std;

int main() {
	const int maxnum = 100001;
	int students, scores[maxnum];
	cin >> students;
	for (int i = 0; i < students; i++) {
		cin >> scores[i];
	}

	int cases, CheckScore[maxnum] = { 0 }, mark = 0;
	cin >> cases;
	while(mark<cases){
		int temp;
		cin >> temp;
		for(int i=0;i<students;i++){
			if (temp == scores[i])CheckScore[mark]++;
		}
		mark++;
	}
	for(int i=0;i<mark;i++){
		if (i == mark - 1)cout << CheckScore[i] << endl;
		else
			cout << CheckScore[i] << " ";
	}
	return 0;
}