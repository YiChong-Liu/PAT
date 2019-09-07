/*author:moonlake23
question1011:A+B和C*/

/*这题本以为需要用BigInteger
但是longlongint就OK啦
注意格式: %lld*/

#include<stdio.h>
int main() {
	int cases;
	scanf("%d", &cases);
	int mark = 0;
	while (cases--) {
		mark++;
		long long int a, b, c;
		scanf("%lld %lld %lld", &a, &b, &c);
		if (a + b > c)printf("Case #%d: true\n",mark);
		else
			printf("Case #%d: false\n", mark);
	}
	return 0;
}

