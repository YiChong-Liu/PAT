/*author:moonlake23
question1060:爱丁顿数*/

/*时间复杂度为O(n^2)
提交时有一个点可能tle或段错误,
还是简化一下为好*/

#include<stdio.h>
int main() {
	int days;
	scanf("%d", &days);
	int acres[100001];
	for (int i = 0; i < days; i++) {
		scanf("%d", &acres[i]);
	}

	int flag = 1;
	int E, finalE=0;
	for (E = 0;; E++) {
		int mark = 0;
		if (!flag)break;
		for (int i = 0; i < days; i++) {
			if (acres[i] >E)mark++;
		}
		if (mark < E)flag = 0;
		else
			finalE = E;
	}

	printf("%d\n", finalE);
	return 0;
}

