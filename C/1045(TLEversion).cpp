/*author:moonlake23
question1045:快速排序*/

/*结果正确，但时间超时*/

#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int capacity, i, j;
	scanf("%d", &capacity);
	int numbers[100001];
	for (i = 0; i < capacity; i++) {
		scanf("%d", &numbers[i]);
	}

	//存储主元数
	int standardnums[100001];
	int mark = 0;
	for (i = 0; i < capacity; i++) {
		int standard = numbers[i];
		int flag = 1;

		if (i == 0) 
		{
			for (j = 1; j < capacity; j++) {
				if (numbers[j] < standard) {
					flag = 0;
					break;
				}
			}
		}

		else if (i == capacity - 1) 
		{
			for (j = 0; j < capacity - 1; j++) {
				if (numbers[j] > standard) {
					flag = 0;
					break;
				}
			}
		}
		else 
		{
			for (j = 0; j <i; j++) {
				if (numbers[j] > standard) {
					flag = 0;
					break;
				}
			}

			if (flag) {
				for (j = i + 1; j < capacity; j++) {
					if (numbers[j] < standard)flag = 0;
				}
			}
		}

		if (flag) {
			standardnums[mark] = numbers[i];
			mark++;
		}
	}

	sort(standardnums, standardnums + mark);
	printf("%d\n", mark);
	for (i = 0; i < mark; i++) {
		if (i != mark - 1) {
			printf("%d ", standardnums[i]);
		}
		else {
			printf("%d\n", standardnums[i]);
		}
	}
	return 0;
}




