/*author:moonlake23
question1060:爱丁顿数*/

/*分析：从下标1开始存储n天的公里数
在数组a中，对n个数据从大到小排序，
i表示了骑车的天数，那么满足
a[i] > i的最大值即为所求*/

/*时间复杂度降到了O(n)*/
#include<iostream>
#include<algorithm>
using namespace std;
int acres[1000001];

bool cmp(int a, int b) {
	return a > b;
}
int main() {
	int days;
	scanf("%d", &days);
	int i, j;
	for (i = 0; i < days; i++) {
		scanf("%d", &acres[i]);
	}
	sort(acres,acres+days, cmp);
	int E = 0;
	while (E < days&&acres[E]>E + 1) {
		E++;       
	}
	printf("%d\n", E);

	return 0;
}


