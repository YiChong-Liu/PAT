/*author:moonlake23
question1091:N-自守数*/

#include<stdio.h>
int main() {
	int cases;
	scanf("%d", &cases);
	int num[20];
	for (int i = 0; i < cases; i++) {
		scanf("%d", &num[i]);
	}

	for (int i = 0; i < cases; i++) {
		int flag = 0;
		for (int j = 1; j < 10; j++) {
			int result = num[i] * num[i] * j;
			if (result % 100 == num[i] || result % 10 == num[i] || result % 1000 == num[i]) {
				flag = 1;
				printf("%d %d\n", j, result);
				break;
			}
		}
		if (!flag)printf("No\n");
	}
	return 0;
}

