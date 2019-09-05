/*author:moonlake23
question1057:数零壹*/

#include<stdio.h>
#include<string.h>
int main() {
	char ch[100001];
	gets_s(ch);
	int length = strlen(ch);
	int sum = 0;
	for (int i = 0; i < length; i++) {
		if (ch[i] >= 'a'&&ch[i] <= 'z') {
			sum += (ch[i] - 96);
		}
		else if (ch[i] >= 'A'&&ch[i] <= 'Z') {
			sum += (ch[i] - 64);
		}
	}

	int result[1001], mark = 0;
	while (sum) {
		result[mark++] = sum % 2;
		sum = sum/2;
	}
	int num0=0,num1=0;
	for (int i = 0; i<mark; i++) {
		if (result[i] == 0)num0++;
		else if (result[i] == 1)num1++;
	}
	printf("%d %d\n", num0, num1);
	return 0;
}