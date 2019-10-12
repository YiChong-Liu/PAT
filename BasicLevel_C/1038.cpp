/*author:moonlake23
question1038:统计同成绩学生*/

/*改进成功！关键思路:由于成绩为百分制，
则开一个长度为101的vector数组存储分数出现的次数
就行了，大大节省了内存！*/

#include<iostream>
#include<vector>
using namespace std;

int main() {
	int students, cases, temp;
	cin >> students;
	vector<int> score(101);
	for (int i = 0; i < students; i++) {
		cin >> temp;
		score[temp]++;
	}
	cin >> cases;
	for (int i = 0; i < cases; i++) {
		cin >> temp;
		if (i != 0)printf(" ");
		cout << score[temp];
	}
	return 0;
}