/*author:moonlake23
question1061:判断题*/

#include<stdio.h>
int main() {
	int students, questions;
	scanf("%d %d", &students, &questions);

	int scores[101];//问题分值
	for (int i = 0; i < questions; i++) {
		scanf("%d", &scores[i]);
	}

	int keys[101];//标准答案
	for (int i = 0; i < questions; i++)
		scanf("%d", &keys[i]);

	while (students--) {
		int points=0;//学生得分
		int answers[101];
		for (int i = 0; i < questions; i++) {
			scanf("%d", &answers[i]);
			if (answers[i] == keys[i]) {
				points += scores[i];
			}
		}
		printf("%d\n", points);
	}
	return 0;
}




