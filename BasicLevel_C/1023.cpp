/*author:moonlake23
question1023:组个最小数*/

#include<stdio.h>
int main() {
	int count[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &count[i]);
	}
	int mark = 0;

	//取出非零首位
	char num[50];
	for (int i = 1; i < 10; i++) {
		if (count[i] != 0) {
			num[mark++] = i + 48;
			count[i]--;
			break;
		}
	}

	for (int i = 0; i < 10; i++) {
		while (count[i] != 0) {
			num[mark++] = i + 48;
			count[i]--;
		}
	}

	for (int i = 0; i < mark; i++) {
		printf("%c", num[i]);
	}
	printf("\n");
	return 0;
}





