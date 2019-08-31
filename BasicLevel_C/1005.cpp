/*author:moonlake23
question1005:继续(3n+1)猜想*/

#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int length;
	scanf("%d", &length);
	int num[101];
	for (int i = 0; i < length; i++) {
		scanf("%d", &num[i]);
	}

	for (int i = 0; i < length; i++) {
		int cover[101] = { 0 }, mark = 0;
		if (num[i] > 0) {
			int temp = num[i];
			while (temp != 1) {
				if (temp % 2 == 0)
				{
					temp /= 2;
					cover[mark++] = temp;
				}
				else
				{
					temp = (temp * 3 + 1) / 2;
					cover[mark++] = temp;
				}
			}

			for (int j = 0; j < length; j++) {
				if (num[j] > 0) {
					for (int k = 0; k < mark; k++) 
					{
						if (num[j] == cover[k]) 
						{
							num[j] = -1;
							break;
						}
					}
				}
			}

		}
	}

	int num2[101], mark2 = 0;
	for (int i = 0; i < length; i++) {
		if (num[i] > 0) {
			num2[mark2++] = num[i];
		}
	}

	sort(num2, num2 + mark2);
	for (int i = mark2 - 1; i >= 0; i--) {
		if (i != 0)printf("%d ", num2[i]);
		else
			printf("%d\n", num2[i]);
	}

	return 0;
}




