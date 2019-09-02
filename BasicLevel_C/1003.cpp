/*author:moonlake23
question1003:我要通过*/

/*题目注意:
条件2：P、T字符的两侧字符串片段要对称
条件3：在条件2的基础上得到新的符合要求的字符串
555又是一道很坑的题o(╥﹏╥)o*/

#include<stdio.h>
int main(void) {
	int cases, k, flag;
	char ch;

	scanf("%d", &cases);
	getchar();//用来消除scanf后的回车
	while (cases--) {
		int a[3] = { 0 };//每轮都要把该数组清零。
		k = 0, flag = 1;
		/*以P、T为分割点，统计P前，PT之间、T后的A的个数*/
		while ((ch = getchar()) != '\n') {   //遇回车说明一个单词输入完毕。
			if (ch == 'A')	a[k]++;    //统计P前的A的个数，存入a[0].
			else if (ch == 'P' && k == 0)	k = 1;    //统计PT之间的A的个数，存入a[1].
			else if (ch == 'T' && k == 1)	k = 2;    //统计T后的A的个数，存入a[2].
			else    flag = 0;    //出现PAT之外的字符，标记flag为0.
		}
		/*是否有PAT以为的字符 && 有没有T && PT之间有没有A && P前A乘PT之间A == T后A*/
		if (flag && k == 2 && a[1] && a[0] * a[1] == a[2])	printf("YES\n");
		else	printf("NO\n");
	}

	return 0;
}


