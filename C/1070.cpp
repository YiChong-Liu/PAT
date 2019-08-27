/*author:moonlake23
question1070:结绳*/

/*思路：短的在前（对折次数多）
长的在后（对折次数少），损失更少*/

#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int ropes, length[10001];
	scanf("%d", &ropes);
	for (int i = 0; i < ropes; i++) {
		scanf("%d", &length[i]);
	}
	sort(length, length + ropes);

	for (int i = 0; i < ropes-1 ; i++) {
		int sum = (length[i] + length[i + 1]) / 2;
		//向下取整
		length[i + 1] = sum;
	}

	printf("%d\n", length[ropes - 1]);

	return 0;
}




