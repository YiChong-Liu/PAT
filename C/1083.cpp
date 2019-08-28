/*author:moonlake23
question1083:是否存在相等的差*/

#include<stdio.h>
#include<math.h>
int difference[10001] = {0};
int main() {
	int cards; 
	scanf("%d", &cards);

	//difference数组:重复次数,差值小在前，差值大在后
	for (int i = 1; i <=cards; i++) {
		int temp;
		scanf("%d", &temp);
		int result = abs(temp - i);
		difference[result]++;
	}

	for (int i = 10000; i >=0; i--) {
		if(difference[i]>1) 
			printf("%d %d\n", i, difference[i]);
	}
	return 0;
}




