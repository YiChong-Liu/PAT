/*author:moonlake23
question1017:A除以B*/

//考点：大数的除法

#include<stdio.h>
#include<string.h>
#define maxnum 1001
int main() {
	char num[maxnum];
	int portion, Q, R;
	scanf("%s %d", num, &portion);
	int len = strlen(num);

	//先对字符串第一个位置进行商处理
	Q = (num[0] - 48)/portion;
	if (len == 1 || len > 1 && Q != 0)printf("%d", Q);
	R = (num[0] - 48) % portion;

	for (int i = 1; i < len; i++) {
		//获取商:余数乘10+下一位的和，除以portion
		Q = (R * 10 + (num[i] - 48)) / portion;
		printf("%d", Q);
		//新的余数:原余数乘10+新的部分
		R = (R*10+(num[i] - 48)) %portion;

	}
	printf(" %d\n", R);
	return 0;
}