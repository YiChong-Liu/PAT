/*author:moonlake23
question1032:挖掘机技术哪家强*/

#include<iostream>
using namespace std;

typedef struct {
	int school;
	int score;
}School;
int main() {
	const int MAXNUM = 100001;
	int allSchool[MAXNUM] = { 0 };//存储学校编号对应的分数
	int cases;
	cin >> cases;
	while (cases-- > 0) {
		School sch;
		cin >> sch.school >> sch.score;
		allSchool[sch.school] += sch.score;
	}

	int max = 0, loc;
	for (int i = 0; i < MAXNUM; i++) {
		if (allSchool[i] > max) {
			loc = i;
			max = allSchool[i];
		}
	}
	cout << loc << " " << max << endl;
	return 0;
}