/*author:moonlake23
question1065:单身狗*/

/*思路一：
疯狂超时哈哈哈*/

#include<iostream>
#include<algorithm>
using namespace std;
typedef struct {
	int husband=0;
	int wife=0;
}CoupleID;


int main() {
	int couples;
	scanf("%d", &couples);
	CoupleID cp[50001];
	for (int i = 0; i < couples; i++) {
		scanf("%d %d", &cp[i].husband, &cp[i].wife);
	}

	int numbers;
	scanf("%d", &numbers);
	int guests[10001] = { 0 };
	for (int i = 0; i < numbers; i++) {
		scanf("%d", &guests[i]);
	}

	int left = 0;//落单人数
	for (int j = 0; j < couples; j++) {
		for (int i = 0; i < numbers; i++)
		{
			if (guests[i] == cp[j].husband) 
			{
				for (int k = 0; k < numbers; k++) {
					if (guests[k] == cp[j].wife&&k != i)
						guests[k] = guests[i] = 0;
				}
			}
		}
	}

	for (int j = 0; j < numbers; j++) {
		if (guests[j] != 0)left++;
	}

	printf("%d\n", left);
	sort(guests, guests + numbers);
	for (int j = 0; j < numbers; j++) {
		if (guests[j] != 0) {
			left--;
			if (left >0)printf("%d ", guests[j]);
			else
				printf("%d\n", guests[j]);
		}
	}
	return 0;
}


