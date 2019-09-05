/*author:moonlake23
question1022:D进制的A+B*/

#include<stdio.h>
int main() {
	int A, B, D;
	scanf("%d %d %d",&A,&B,&D);
	int sum = A + B;
	int result[101], mark = 0;
	//注意sum为0的特殊情况，否则会有一个点过不了
	if (sum == 0)printf("0\n");
	else {
		while (sum) {
			result[mark++] = sum%D;
			sum = (sum - sum%D) / D;
		}
		for (int i = mark - 1; i >= 0; i--) {
			printf("%d", result[i]);
		}
		printf("\n");
	}
	return 0;
}
