/*author:moonlake23
question1076:wifi密码*/

/*此题直接挨个读取
就行了，非常简单*/
#include<stdio.h>
int main()
{
	char string[4];
	while (scanf("%s", string) != EOF) {
		if (string[2] == 'T')
			printf("%d", string[0] - 64);
	}
	printf("\n");
	return 0;
}



