/*author:moonlake23
question1045:快速排序*/

/*优化时间复杂度分析：对原序列sort排序，逐个比较，当当前元素没有变化
并且它左边的所有值的最大值都比它小的时候
就可以认为它一定是主元（很容易证明正确性）～*/

/*注意:当主元数为0时，数据格式为0\n\n
太坑了555o(╥﹏╥)o*/

#include<iostream>
#include<algorithm>
int numbers[100000], copynumbers[100000], standardnums[100000];
using namespace std;

int main() {
	int capacity, i;
	scanf("%d", &capacity);
	for (i = 0; i < capacity; i++) {
		scanf("%d", &numbers[i]);
		copynumbers[i] = numbers[i];
	}

	sort(numbers, numbers + capacity);
	int leftmax = 0;//主元左边最大值
	int mark = 0;

	for (i = 0; i < capacity; i++) {
		if (numbers[i] == copynumbers[i] && copynumbers[i] > leftmax) {
			standardnums[mark++] = copynumbers[i];
		}
		if (copynumbers[i] > leftmax) {
			leftmax = copynumbers[i];
		}
	}

	if (mark == 0)printf("%d\n\n", mark);
	else {
		printf("%d\n", mark);
		for (i = 0; i < mark; i++) {
			if (i == mark - 1)printf("%d\n", standardnums[i]);
			else
				printf("%d ", standardnums[i]);
		}
	}

	return 0;
}




