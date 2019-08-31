/*author:moonlake23
question1002:写出这个数*/

#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {
	char num[101];
	scanf("%s", num);
	int sum = 0, length = strlen(num);

	for (int i = 0; i < length; i++) {
		sum += num[i] - '0';
	}

	char translate[10][5] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };

	//和>=100输出百位数
	if (sum / 100 > 0) {
		printf("%s ", translate[sum / 100]);
	}
	//和>=100输出十位数
	if (sum / 10 > 0) {
		printf("%s ", translate[sum / 10 % 10]);
	}
	printf("%s\n", translate[sum % 10]);
	return 0;
}




