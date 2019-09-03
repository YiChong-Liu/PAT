/*author:moonlake23
question1087:有多少不同的值*/

#include<stdio.h>

int calculate(int num) {
	int part1 = num / 2, part2 = num / 3, part3 = num / 5;
	return part1 + part2 + part3;
}

int main() {
	int maxnum;
	int result[10001], mark = 0,all=0;
	scanf("%d", &maxnum);
	for (int i = 1; i <= maxnum; i++) {
		result[mark++] = calculate(i);
	}

	for (int i = 0; i < mark-1; i++) {
		for (int j = i + 1; j < mark; j++) {
			if (result[j] == result[i])result[j] = -1;
		}
	}

	for (int i = 0; i < mark; i++) {
		if (result[i]>=0)all++;
	}

	printf("%d\n", all);
	return 0;
}


