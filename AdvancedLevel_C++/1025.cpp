/*author:moonlake23
question1025:PAT Ranking*/

/*甲级第一题 噢耶(#^.^#)*/

#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

typedef struct {
	int location;
	char ID[14];
	double score;
	int local_rank;
}Student;

bool cmp(Student a, Student b) {
	if (a.score != b.score)return a.score > b.score;
	else return strcmp(a.ID, b.ID) < 0;
	//分数相同按准考证号从小到大排序
}

Student stu[30010];
int main() {
	int locations, cases,mark=0,len=0;//mark用来提供考点,len标记数组位置
	cin >> locations;
	while (locations > 0) {
		locations--;
		mark++;

		cin >> cases;
		for (int i = len; i <len+cases; i++) {
			stu[i].location = mark;
			scanf("%s %lf", stu[i].ID, &stu[i].score);
		}
		sort(stu + len, stu + len + cases, cmp);
		for (int i = len; i < len + cases; i++) {
			//计算本地排名
			if (stu[i].score == stu[i - 1].score)stu[i].local_rank = stu[i - 1].local_rank;
			else {
				stu[i].local_rank = i - len + 1;
			}
		}
		len += cases;
	}
	cout << len << endl;
	sort(stu, stu + len, cmp);
	int rank = 1;
	for (int i = 0; i < len; i++) {
		//如果分数相同则排名不发生变化
		if (i > 0 && stu[i].score != stu[i - 1].score) {
			rank = i + 1;
		}
		printf("%s %d %d %d\n", stu[i].ID, rank, stu[i].location, stu[i].local_rank);
	}
	return 0;
}